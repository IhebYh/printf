#include "main.h"
/**
 * _printf - entry point
 * @format:struct
 * Return:Null or number of characters used
 */
int _printf(const char *format, ...)
{
va_list apt;
int i = 0, count = 0, func = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(apt, format);
while (format[i] && format)
{
if (format[i] != '%')
{
_putchar(format[i++]);
count++;
}
if (format[i] == '%')
{
if ((format[i + 1]) == '%')
{
_putchar('%');
count++;
i += 2;
continue;
}
else
{
func = get_func(format[i + 1], apt);
if (func != 0)
{
count += func;
i += 2;
continue;
}
if (format[i + 1] == '\0' || func == 0 )
{
_putchar(format[i++]);
count++;
}
}
}
}
va_end(apt);
return (count);
}
