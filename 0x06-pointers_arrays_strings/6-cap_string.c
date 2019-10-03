#include "holberton.h"
/**
 * *cap_string - converts firt letter to upper
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int i;
	int b;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		b = i;
		if (s[b] == ' ' || s[b] == '\n' || s[b] == '\t' || s[b] == '.'
		    || s[b] == ')' || s[b] == '(' || s[b] == '{' || s[b] == '}'
		    || s[b] == ',' || s[b] == '!' || s[b] == ';' || s[b] == '?'
		    || s[b] == '"')
		{
			if (s[b + 1] >= 'a' && s[b + 1] <= 'z')
			{
				s[b + 1] = s[b + 1] - 32;
			}
		}
	}
	return (s);
}
