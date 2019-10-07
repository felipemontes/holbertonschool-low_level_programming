#include "holberton.h"
/**
 * set_string - sets the value of a pointer
 * @s: pointer to a pointer
 * @to: pointer
 * Return: pointer to the first occurrence
 */
void set_string(char **s, char *to)
{
	*s = to;
}
