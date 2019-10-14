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
	int i = 0;
	int value[] = {25, 10, 5, 2 , 1};
	int cents;
	int b = 1;
	int change = atoi(argv[b]);

	if (argc == 2)
	{
		while (change > 0)
		{
			cents += change / value[i];
			change = change % value[i];
			if (change % value[i] != 0)
			{
				i++;
			}
		}
		printf("%d\n", cents);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
