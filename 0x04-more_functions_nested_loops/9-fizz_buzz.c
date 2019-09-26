#include <stdio.h>
/**
 * main - writes numbers from 0 to 100 with a condition
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("buzz ");
		}
		else
		{
		printf("%i ", a);
		}
		a++;
	}
	printf("\n");

	return (0);
}
