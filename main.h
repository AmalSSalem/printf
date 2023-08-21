#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _printf(const char *format, ...);

/**
 * struct prnt - a data type for format specifier and functions
 * @s: the operator in strings
 * @fmt_func: the function pointer
 */
typedef struct prnt
{
	char *s;
	int (*fmt_func)(va_list);
} fmt_t;

int get_func(const char *, fmt_t f_list[], va_list);
int _putchar(char c);
int get_op_func(const char *, fmt_t f_list[], va_list arg);
int char_print(va_list);
int str_print(va_list);
int percent_print(va_list);
int int_print(va_list);
#endif
