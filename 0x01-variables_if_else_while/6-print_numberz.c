#include <stdio.h>
/**
* main - This program is about random numbers
* Return: It returns positive or negative
*/
int main(void)
{
int a = '0';
while (a <= '9')
{
putchar(a);
a = a + 1;
}
putchar('\n');
return (0);
}
