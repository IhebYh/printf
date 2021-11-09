#ifndef MAIN_H
#define MAIN_H
/* implementing needed libraries */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/* implementing needed functions */
int _printf(const char *format, ...);
int get_func(const char s, va_list ap);
int print_c(va_list arg);
int print_s(va_list arg);
int print_i(va_list arg);
int _putchar(char c);
/**
* struct print - struct print
* @c : The character
* @func : The function associated
*/
typedef struct print
{
char c;
int (*func)(va_list);
} printf_t;
#endif
