#include "main.h"
/**
 * print_b - entry point
 * @arg : va_list
 *Return:count
 */
int print_b(va_list arg)
{
unsigned int n = 0, count = 0;

n = va_arg(arg,unsigned int);

if (n <= 1)
{
_putchar(n + '0');
count++;
}
else
{
_putchar((n % 2) + '0');
n /= 2;
count++;
}
return (count);
}