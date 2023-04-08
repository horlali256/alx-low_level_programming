#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends a NULL terminated string to the end of a file.
 * @filename: the name of the file to append to.
 * @text_content: the NULL terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, n_write;

	if (filename == 0)
	return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
	return (-1);

	if (text_content != 0)
	{
	j = 0;
	while (text_content[j])
		j++;

	n_write = write(i, text_content, j);
	if (n_write == -1 || n_write != j)
	{
	close(i);
		return (-1);
	}
	}

	close(i);

	return (1);
}
