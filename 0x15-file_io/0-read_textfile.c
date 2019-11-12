#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - function to read text
 * @filename: file name
 * @letters: letter
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	int last;
	char *buf = malloc(sizeof(letters));
	int r;

	if (filename == NULL || buf == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	last = read(fp, buf, letters);
	if (last == -1)
		return (0);
	r = write(STDOUT_FILENO, buf, last);
	if (r == -1)
		return (0);
	close(fp);
	return (r);
}
