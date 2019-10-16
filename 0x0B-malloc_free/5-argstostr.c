#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function to concatenate all the arguments
 * @ac: count the elements
 * @av: elements
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, b, k;
	char *ar;
	char *n;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		k = 0;
		for (i = 0; i < ac; i++)
		{
			k++;
			for (b = 0; av[i][b] != '\0'; b++)
			{
				k++;
			}
		}
		ar = malloc(sizeof(char) * k + 1);
		n = "\n";
		for (i = 0; i < ac; i++)
		{
			ar = _strcat(ar, av[i]);
			if (ar == NULL)
				return (NULL);
			if ((i + 1) < ac)
			{
				ar = _strcat(ar, n);
				if (ar == NULL)
					return (NULL);
			}
		}
	}
	ar = _strcat(ar, n);
	if (ar == NULL)
		return (NULL);
	return (ar);
}
/**
 * _strcat - concatenates two strings
 * @dest: dest
 * @src: src
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
