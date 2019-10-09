#include "holberton.h"
/**
 * _prime - function to find prime numbers
 * @num: number to compare
 * @var: the same as n
 * Return: the n
 */
int _prime(int num, int var)
{
	if (num == var)
	{
		return (1);
	}
	else if (var % num == 0 || var <= 1)
	{
		return (0);
	}
	return (_prime(num + 1, var));
}
/**
 * is_prime_number - prints prime numbers
 * @n: main number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (_prime(2, n));
}
