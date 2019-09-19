#include <stdio.h>
/**
* main - This program is about random numbers
* Return: It returns positive or negative
*/
int main(void)
{
int i = 0;
for (i = 0; i < 100; i++)
{
putchar ((i / 10) + '0');
putchar ((i % 10) + '0');
if (i == 99)
{
}
else
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
