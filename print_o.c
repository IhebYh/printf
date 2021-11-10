#include "main.h"
/**
 * print_o - prints an octal
 *@o: the list of arguments
 * Return: number of printed characters.
 */
int print_o(va_list o)
{
unsigned int octal[11];
unsigned int count = 0, n = 0;
int i = 0;
n = va_arg(o, unsigned int);
if (n == 0)
{
_putchar(0 + '0');
count++;
}
while (n > 0)
{
octal[i] = n % 8;
n = n / 8;
i++;
}
for (--i; i >= 0; i--)
{
_putchar(octal[i] + '0');
count++;
}
return (count);
}
