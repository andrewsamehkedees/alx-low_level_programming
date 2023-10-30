#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t to_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
