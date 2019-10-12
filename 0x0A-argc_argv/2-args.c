#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: size of arg
 * @argv: pointer to an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
