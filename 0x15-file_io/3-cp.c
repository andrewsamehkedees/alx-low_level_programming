#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFSIZE 1024
#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 or a status code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, to_read, to_write;
	char buffer[BUFSIZE];
	mode_t mode;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
		exit(98);
	}

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
		close(fd_from);
		exit(99);
	}
	while ((to_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		to_write = write(fd_to, buffer, to_read);
		if (to_write == -1)
			write_error_to(fd_from, fd_to, argv[2]);
	}
	if (to_read == -1)
		read_error_to(fd_from, fd_to, argv[1]);

	if (close(fd_from) == -1)
		close_error_to(fd_from);

	if (close(fd_to) == -1)
		close_error_to(fd_to);
	return (0);
}

/**
 * write_error_to - handles a write error
 * @fd_from: file descriptor for the source file
 * @fd_to: file descriptor for the destination file
 * @filename: name of the destination file
 */
void write_error_to(int fd_from, int fd_to, char *filename)
{
	dprintf(STDERR_FILENO, WRITE_ERROR, filename);
	close(fd_from);
	close(fd_to);
	exit(99);
}

/**
 * read_error_to - handles a read error
 * @fd_from: file descriptor for the source file
 * @fd_to: file descriptor for the destination file
 * @filename: name of the source file
 */
void read_error_to(int fd_from, int fd_to, char *filename)
{
	dprintf(STDERR_FILENO, READ_ERROR, filename);
	close(fd_from);
	close(fd_to);
	exit(98);
}

/**
 * close_error_to - handles a close error
 * @fd: file descriptor that could not be closed
 */
void close_error_to(int fd)
{
	dprintf(STDERR_FILENO, CLOSE_ERROR, fd);
	exit(100);
}
