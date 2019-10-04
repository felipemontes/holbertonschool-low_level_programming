#include "holberton.h"
/**
 * *leet - converts firt letter to upper
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i = 0;
	int a = 0;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; let[a] != '\0'; a++)
		{
			if (s[i] == let[a])
			{
				s[i] = num[a];
			}
		}
	}
	return (s);
}
