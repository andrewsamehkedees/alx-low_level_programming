#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letters to read
 * Return: actual number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t to_read, to_write;
	char *array;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	array = malloc(sizeof(char) * letters);
	if (array == NULL)
		return (0);

	to_read = read(fd, array, letters);
	if (to_read == -1)
		return (0);
	to_write = write(STDOUT_FILENO, array, to_read);
	if (to_write == -1 || to_write != to_read)
		return (0);
	close(fd);
	free(array);
	return (to_write);
}
