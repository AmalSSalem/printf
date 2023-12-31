#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	int char_count;

	fmt_t f_list[] = {
		{"c", char_print},
		{"s", str_print},
		{"%", percent_print},
		{"d", int_print},
		{"i", int_print},
		{"b", bin_print},
		{"u", unsigned_print},
		{"o", octal_print},
		{"x", hexa_print},
		{"X", HEXA_print},
		{"p", address_print},
		{NULL, NULL}
	};

	va_list arg;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(arg, format);

	char_count = get_func(format, f_list, arg);
	va_end(arg);
	return (char_count);
}

