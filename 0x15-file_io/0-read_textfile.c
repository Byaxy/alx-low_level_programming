#include "main.h"

/**
 * read_textfile - read file and print to the std output
 * @filename: file to read
 * @letters: size of file to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n_read, n_write;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	n_write = write(STDOUT_FILENO, buffer, n_read);
	free(buffer);
	if (n_write == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (n_read);
}
