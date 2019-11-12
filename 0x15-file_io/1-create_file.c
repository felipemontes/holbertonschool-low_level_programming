#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - function to create a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	while (text_content[i] != '\0')
	{
		i++;
	}

	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);

	return (1);
}
