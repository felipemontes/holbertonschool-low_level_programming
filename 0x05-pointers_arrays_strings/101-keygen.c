#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - creates random passwords
 * Return: 0
 */
int main(void)
{
	int length = 10;
	int temp;

	srand(time(NULL));
	temp = length;
	while (temp--)
	{
		putchar(rand() % 49 + 57);
		srand(rand());
	}
	return (0);
}
