#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints standard output.
 * @filename: the name of the file to read.
 * @letters: the maximum number of letters to read and print.
 *
 * Return: the actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	free(buffer);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
	free(buffer);
	close(fd);
		return (0);
	}

	buffer[n_read] = '\0';

	if (write(STDOUT_FILENO, buffer, n_read) != n_read)
	{
	free(buffer);
	close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (n_read);
}
