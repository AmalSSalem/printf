#include "main.h"

/**
 * get_op_func - a function that takes the format directives and prints
 * the right format
 * @format: a string character
 * @f_list: list of functions
 * @arg: variadic list passed with multible inputs
 * Return: the total num of characters printed
 */

int get_op_func(const char *format, fmt_t f_list[], va_list arg)
{
	int i, j, val, char_count;

	char_count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].s != NULL; j++)
			{
				if (format[i + 1] == f_list[j].s[0])
				{
					val = f_list[j].fmt_func(arg);
					if (val == -1)
						return (-1);
					char_count += val;
					break;
				}
			}
			if (f_list[j].s == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					char_count += char_count + 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			char_count++;
		}
	}
	return (char_count);
}
