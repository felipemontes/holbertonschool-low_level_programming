#include "holberton.h"
/**
 * rev_string - prints a string in reverse
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	int div;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	div = len / 2;
	for (i = 0; i < div; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
