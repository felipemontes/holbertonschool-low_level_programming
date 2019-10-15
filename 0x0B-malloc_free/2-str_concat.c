#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *a = NULL;

	a = malloc((_strlen(s1) + _strlen(s2)) * sizeof(char) + 1);

	if (a == '\0')
	{
		return (NULL);
	}
	_strcat(a, s1);
	_strcat(a, s2);

	return (a);

}
