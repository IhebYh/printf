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
printf_t func_list[] = {{'c', print_c}, {'s', print_s}, {'%', print_percent},
{'d', print_i}, {'i', print_i}, {'b', print_b},
{'u', print_u}, {'o', print_o}};
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
