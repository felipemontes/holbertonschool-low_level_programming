#include "holberton.h"
/**
 * _strstr - function to locate a substring
 * @haystack: string
 * @needle: char to match
 * Return: pointer to beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
		{
			for (;*needle != '\0'; needle++)
			{
				return (needle);
			}
		}
	}
	return (0);
}
