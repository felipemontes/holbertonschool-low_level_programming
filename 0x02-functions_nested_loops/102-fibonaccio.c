#include <stdio.h>
/**
 * main - This program is about random numbers
 * Return: It returns positive or negative
 */
int main(void)
{
	long int a = 0;
	long int b = 1;
	long int c = 0;
	long int d = 0;

	while (d <= 49)
	{
		c = a + b;
		printf("%lu", c);
		if (d == 49)
		{
		}
		else
		{
			printf(", ");
		}
		a = b;
		b = c;
		d++;
	}
	return (0);
}
