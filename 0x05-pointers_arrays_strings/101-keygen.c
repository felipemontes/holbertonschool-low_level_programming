#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int length = 8;
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
