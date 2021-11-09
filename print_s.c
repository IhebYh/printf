#include "main.h"
/**
 * print_s - entry point
 * @s : char
 *Return: j
 */
int print_s(char *s)
{
int j = 0;
while (s[j] != '\0')
{
print_c(s[j]);
j++
}
return (j);
}
