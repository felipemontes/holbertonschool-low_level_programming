#include "holberton.h"
/**
 * _root - function to find square root
 * @num: number to iterate
 * @var: the same as n
 * Return: the natural square root
 */
int _root(int num, int var)
{
	if (num * num == var)
	{
		return (num);
	}
	else if (num * num > var)
	{
		return (-1);
	}
	return (_root(num + 1, var));
}
/**
 * _sqrt_recursion - prints the square root
 * @n: main number
 * Return: the root of the number
 */
int _sqrt_recursion(int n)
{
	return (_root(1, n));
}
