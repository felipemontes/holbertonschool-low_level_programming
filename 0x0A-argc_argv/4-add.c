#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints its name
 * @argc: size of arg
 * @argv: numbers to multiply
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int b;
	int sum = 0;

	while (i < argc)
	{
		b = 0;
		while (argv[i][b] != '\0')
		{
			if (!(isdigit(argv[i][b])))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);

        return (0);
}
