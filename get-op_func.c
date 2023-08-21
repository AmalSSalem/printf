#include "main.h"

/**
 * get_func - a function that checks for specifiers
 * @format: string format
 * @f_list: an array of structures
 * @arg: argument pointer
 * Return: the lenght of the string
 */
int get_func(const char *format, fmt_t f_list[], va_list arg)
{
	int j, val, char_count = 0, state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
			{
				_putchar(*format);
				char_count++;
			}
		}
		else if (state == 1)
		{
			j = 0;
			while (f_list[j].s != NULL)
			{
				if (*format == f_list[j].s[0])
				{
					val = f_list[j].fmt_func(arg);
					char_count += val;
					break;
				}
				j++;
			}
			/*if (f_list[j].s == NULL && *(format + 1) != ' ')
			{
				if (*(format + 1) != '\0')
				{
					_putchar(*(format + 1));
					_putchar(*format);
					char_count += 2;
				}
			}
			else
				return (-1);*/
			state = 0;
		}
		format++;
	}
	return (char_count);
}
