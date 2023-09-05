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
		{
			dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (to_read == -1)
	{
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd_to);
		exit(100);
	}

	return (0);
}
