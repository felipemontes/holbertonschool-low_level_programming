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
 * string_nconcat - function to concatenate two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: On success 1.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str = malloc((_strlen(s1) + n) * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		str[i] = s2[b];
		i++;
	}
	str[i] = '\0';
	return (str);
}
