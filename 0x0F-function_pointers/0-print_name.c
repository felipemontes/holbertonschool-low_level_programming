#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name
 * @f: function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	(*f)(name);
	}
}
