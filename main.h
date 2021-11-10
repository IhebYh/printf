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
int print_percent(va_list arg);
int print_i(va_list arg);
int _putchar(char c);
int print_b(va_list arg);
int print_u(va_list arg);
int print_o(va_list arg);
int print_x(va_list arg);
int print_X(va_list arg);
int print_p(va_list arg);

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
