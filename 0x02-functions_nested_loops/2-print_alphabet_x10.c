#include "holberton.h"
/**
* print_alphabet_x10 - writes the alphabet 10 times
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet_x10(void)
{
int a;
int b;
for (b = 0; b <= 10; b++)
{
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
}
