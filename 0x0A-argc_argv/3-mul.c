#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: size of arg
 * @argv: numbers to multiply
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
