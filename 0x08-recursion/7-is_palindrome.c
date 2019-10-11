#include "holberton.h"
/**
 *_strlen_recursion - find the length of a string
 * @s: number to compare
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
/**
 * _compare - compare two strings
 * @s: string to compare
 * @i: iterator
 * Return: 1 or 0
 */
int _compare(char *s, int i)
{
	if (*s != s[i])
	{
		return (0);
	}
	else if (*s == '\0')
	{
		return (1);
	}
	return (_compare(s + 1, i - 2));
}
/**
 * is_palindrome - find the length of a string
 * @s: string
 * Return: result of comparision
 */
int is_palindrome(char *s)
{
	int a, b;

	a = _strlen_recursion(s);
	b = _compare(s, a - 1);
	return (b);
}
