#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * _copy - copies content of a file to another
 * @filefrom: first file
 * @fileto: second file
 * Return: copied file
 */
int _copy(char *filefrom, char *fileto)
{
	int fd, fp, limit;
	char *buf;

	fd = open(filefrom, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	fp = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}

	buf = malloc(1024);
	while ((limit = read(fd, buf, 1024)) != 0)
	{
		if (write(fp, buf, limit) != limit)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
			exit(99);
		}
	}

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}

	return (0);
}
/**
 * main - recibes the parameters
 * @ac: argument count
 * @av: argument vector
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_copy(av[1], av[2]);

	return (0);
}
