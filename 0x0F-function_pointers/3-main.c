#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - calculator
 * @argc: amount of elements
 * @argv: array
 * Return: 0 always
 *
 */
int main(int argc, char *argv[])
{
	int res;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' &&
	     *argv[2] != '/' && *argv[2] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	op = get_op_func(argv[2]);
	res = op(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
