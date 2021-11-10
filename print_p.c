#include "main.h"
/**
* print_p - Print hexadecimal in lowercase
* @arg: va_list
* Return: int
*/

int print_p(va_list arg)
{
char p[22];
int count = 0, i = 0;
unsigned long int n = 0;

n = va_arg(arg, unsigned long int);
if (n == 0)
{
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
count += 5;
}
else if (n > 0)
{
_putchar('0');
_putchar('x');
count += 2;
while (n > 0)
{
if (((n % 16) >= 10) && ((n % 16) <= 15))
p[i] = 87 + (n % 16);
else
p[i] = 48 + (n % 16);
n /= 16;
i++;
}
for (i -= 1; i >= 0; i--)
{
_putchar(p[i]);
count++;
}
}
return (count);
}