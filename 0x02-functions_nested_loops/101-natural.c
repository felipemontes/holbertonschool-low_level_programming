#include <stdio.h>
/**
 * main - This program is about the sum of natural numbers
 * Return: It returns 0
 */

int main(void)
{
	long int a = 0;
	long int sum = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
		a++;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
