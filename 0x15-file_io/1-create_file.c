#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * create_file - creates a file with the specified name and writes the given
 * @filename: name of the file
 * @text_content: NULL terminated
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t to_write;
	mode_t mode;

	if (filename == NULL)
		return (-1);

	mode = S_IRUSR | S_IWUSR;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (to_write = 0; text_content[to_write]; to_write++)
			;
		to_write = write(fd, text_content, to_write);
		if (to_write == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
