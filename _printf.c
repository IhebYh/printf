#include "main.h"
/**
 * _printf - entry point
 * @format:struct
 * Return:Null or number of characters used
 */
int _printf(const char *format)
{
va_list apt;
unsigned int i = 0, count = 0, func = 0;
char *s;
if (!format || format[0] == '%' && format[1] == '\0')
return (-1);
while (*(fromat + i) && format)
{
if (*(format + i) == '%')
{
func = get_func(*(format + (i + 1)), arg);
if (func != 0)
{
count += func;
i += 2;
continue;
}
if (*(format + (i + 1)) == '\0')
{
_putchar(*(format + i));
count++;
}
}
i++;
}
va_end(arg);
return (count);
}
