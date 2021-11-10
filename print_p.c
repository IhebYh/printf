#include "main.h"
/**
* print_p - Print hexadecimal in lowercase
* @arg: va_list
* Return: int
*/

int print_p(va_list arg)
{
char p[22],phex[20];
unsigned int count = 0, n = 0, i = 2;
p[0] = '0';
p[1] = 'x';
n = va_arg(arg, unsigned int);
phex = print_x(arg);
for (; i < n; i++)
{
p[i] = phex[i - 2];
}
return (count);
}