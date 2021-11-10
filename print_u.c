#include "main.h"
/**
 * print_u - prints an unsigned integer
 *@u: the list of arguments
 * Return: number of printed characters
 *
 */
int print_u(va_list u)
{
unsigned int i, number, div, v, n, count = 0;
n = va_arg(u, unsigned int);
v = n % 10;
n = n / 10;
number = n;
div = 1;
if (number > 0)
{
while ((number / 10) != 0)
{
number = number / 10;
div = div * 10;
}
while (div >= 1)
{
i = n / div;
_putchar(i + '0');
count++;
n = n % div;
div = div / 10;
}
}
_putchar(v + '0');
count++;
return (count);
}
