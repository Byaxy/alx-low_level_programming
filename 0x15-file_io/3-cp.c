#include "main.h"

/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file desriptor
 * @s: str name
 * @fd: file descriptor
 * Return: 0 on success
 */

int __exit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - coppies contents of one file to another
 * @argc: arguments counter
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2, n_read, n_write;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd_1 = open(argv[1], O_RDONLY);

	n_read = read(fd_1, buffer, 1024);

	fd_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (n_read == -1 || fd_1 == -1)
		{
			__exit(98, argv[1], 0);
		}

		n_write = write(fd_2, buffer, n_read);
		if (n_write == -1 || fd_2 == -1)
		{
			__exit(99, argv[2], 0);
		}
	} while (n_read > 0);

	close(fd_2) == -1 ? (__exit(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (__exit(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
