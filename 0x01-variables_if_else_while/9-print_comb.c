#include <stdio.h>
int main(void)
{
int a = '0';
while (a <= '9')
{
putchar(a);
if (a == '9')
{
}
else
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');

return (0);
}
