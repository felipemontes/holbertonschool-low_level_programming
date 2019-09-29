#include <stdio.h>
/**
 * main - function that prints the largest prime factor
 * Return: 0
 */
int main(void)
{
        int a = 2;
        long int factor, num = 612852475143;

        factor = num;
        while (factor > 1)
        {
                if ((factor % a) == 0)
                {
                        factor /= a; /*factor = factor/a*/
                }
                else
                {
                        a++;
                }
        }
        printf("%d\n", a);
        return (0);
}
