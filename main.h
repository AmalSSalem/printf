#ifndef MAIN_H
#define MAIN_H

/*************** INCLUDES *******************/
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/*************** STRUCTS ******************/
/**
 * struct prnt - a data type for format specifier and functions
 * @s: the operator in strings
 * @fmt_func: the function pointer
 */
struct prnt
{
	char *s;
	int (*fmt_func)(va_list);
};
typedef struct prnt fmt_t;
/************** FUNCTIONS ****************/
int _printf(const char *format, ...);
int digit_counter(int num);
int checker(const char *p, fmt_t f_list[]);
int get_func(const char *, fmt_t f_list[], va_list);
int _putchar(char c);
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);
int get_op_func(const char *, fmt_t f_list[], va_list arg);
int char_print(va_list);
int str_print(va_list);
int percent_print(va_list);
int int_print(va_list);
int num_print(va_list);
int bin_print(va_list ap);
#endif

