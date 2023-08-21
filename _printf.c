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
		{NULL, NULL}
	};

	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	char_count = get_func(format, f_list, arg);
	va_end(arg);
	return (char_count);
}

