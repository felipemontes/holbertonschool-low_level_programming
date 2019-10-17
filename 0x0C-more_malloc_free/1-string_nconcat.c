#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
 * _strncat - concatenates two strings
 * @dest: dest
 * @src: src
 * @n: amout of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;
	int i;
	int len;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (a);
}
/**
 * string_nconcat - function to concatenate two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: On success 1.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int *str;

	str = malloc((_strlen(s1) + n) * sizeof(char) + 1);

	if(str == NULL)
	{
		return (NULL);
	}
	_strncat(str, s2, n);
	return (str);
}
