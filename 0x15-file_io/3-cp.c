#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The file name where buffer stores the characters
 *
 * Return: Returns (buffer) i.e. the newly allocated memory space
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors
 * @fd: The file descriptor to be closed
 *
 * Return: Returns nothing (void)
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
 * @ac: The argument count from the command line
 * @av: An array of pointers to the arguments entered in the command line
 *
 * Return: On SUCCESS, returns (0)
 *		   On FAILURE: if the argument count is incorrect - exit code 97
 *         If file_from does not exist or cannot be read - exit code 98
 *         If file_to cannot be created or written to - exit code 99
 *         If file_to or file_from cannot be closed - exit code 100
 */
int main(int ac, char **av)
{
	int src, dest, r, w;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(av[2]);
	src = open(av[1], O_RDONLY);
	r = read(src, buffer, 1024);
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}

		w = write(dest, buffer, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}

		r = read(src, buffer, 1024);
		dest = open(av[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(src);
	close_file(dest);

	return (0);
}
