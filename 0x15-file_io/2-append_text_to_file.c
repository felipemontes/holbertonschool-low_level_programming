#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * append_text_to_file - function that appends text
 * @filename: name of the file
 * @text_content: text content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(fd);

	return (1);

}
