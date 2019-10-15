#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - swap value of two intergers
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
/**
 * *_strcpy - copies string pointed to srd
 * @dest: dest array
 * @src: src array
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - write a function that returns a pointers to a newly allocated str
 * @str: string
 * Return: void
 */
char *_strdup(char *str)
{
	char *a;

	if (str == '\0')
	{
		return (NULL);
	}
	a = malloc(_strlen(str) * sizeof(char) + 1);
	if (a == '\0')
	{
		return (NULL);
	}
	_strcpy(a, str);
	return (a);
}
