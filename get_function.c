#include "main.h"
/**
 * get_func - checking for functions to print
 * @s:char
 * @ap: variadic arguments
 * Return:int
 */
int get_func(const char s, va_list ap)
{
int i = 0, count = 0;
print func_list[] = {{'c', print_char}, {'s', print_string}};
while (func_list[i].c != 0)
{
if (func_list[i].c == s)
{
count += func_list[i].func(ap);
return (count);
}
i++;
}
return (0);
}