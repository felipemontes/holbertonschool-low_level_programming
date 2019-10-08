#include "holberton.h"
/**
 * _strstr - function to locate a substring
 * @haystack: string
 * @needle: char to match
 * Return: pointer to beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{

	int cont = 0;
	int lh;
	int nh;
	int i;
	int m, bol;

	bol = 0;
	for (lh = 0; haystack[lh] != '\0'; lh++)
	{
	}
	for (nh = 0; needle[nh] != '\0'; nh++)
	{
	}
	for (i = 0; i <= (lh - nh); i++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[i + m] == needle[m])
			{
				cont++;
			}
		}
		if (cont == nh)
		{
			bol = 1;
			break;
		}
		else
			cont = 0;
	}
	return (bol == 1 ? haystack + i : 0);
}
