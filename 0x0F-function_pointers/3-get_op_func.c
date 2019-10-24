#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - gets the op to be done
 * @s: operator
 * Return: the operation to be done
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op[0] != s[0])
	{
		i++;
	}
	return (ops[i].f);
}
