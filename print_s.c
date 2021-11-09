#include "main.h"
/**
 * print_s - entry point
 * @arg : va_list
 *Return: j
 */
int print_s(va_list arg)
{
char *s = va_arg(arg, char*);
unsigned int j = 0;
if (s == NULL)
s = "(nil)";
while (s[j] != '\0')
{
_putchar(s[j]);
j++;
}
return (j);
}

