#include <stdio.h>
/**
* main - This program is about random numbers
* Return: It returns positive or negative
*/
int main(void)
{
char a = 'a';
while(a <= 'z')
{
putchar(a);
if(a == 'd' || a == 'o')
{
a= a+2;
}
a++; 
}
putchar('\n');
return (0);
}
