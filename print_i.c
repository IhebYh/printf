#include "main.h"
/**
 * print_i - print integers
 * @arg:va_list
 * Return:int
 */
int print_i(va_list arg)
{
int n = va_arg(arg, int);
int count = 0, rest = 1;
unsigned int x;

x = n;
if (n < 0)
{
_putchar('-');
x = -x;
count++;
}
while ((x / rest) > 9)
{
rest *= 10;
}
while (rest > 0)
{
_putchar(x / rest + '0');
x = (x % rest);
rest = rest / 10;
count++;
}
return (count);
}
