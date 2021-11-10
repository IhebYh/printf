#include "main.h"
/**
* print_X - Print hexadecimal in lowercase
* @arg: va_list
* Return: int
*/

int print_X(va_list arg)
{
char hex[20];
unsigned int count = 0, n = 0;
int i = 0;

n = va_arg(arg, unsigned int);

if (n == 0)
{
_putchar('0' + 0);
count++;
}
while (n > 0)
{
if (((n % 16) >= 10) && ((n % 16) <= 15))
hex[i] = 55 + (n % 16);
else
hex[i] = 48 + (n % 16);
n /= 16;
i++;
}
for (i -= 1; i >= 0; i--)
{
_putchar(hex[i]);
count++;
}
return (count);
}
