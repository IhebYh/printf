#include "main.h"
/**
 * print_b - entry point
 * @arg : va_list
 *Return:count
 */
int print_b(va_list arg)
{
unsigned int binary[32];
int i = 0;
unsigned int n = 0, count = 0;

n = va_arg(arg, unsigned int);

if (n <= 1)
{
_putchar(n + '0');
count++;
}
else
{
while (n > 0)
{
binary[i] = n % 2;
n /= 2;
i++;
}
for (i -= 1; i >= 0; i--)
{
_putchar(binary[i] + '0');
count++;
}
}
return (count);
}
