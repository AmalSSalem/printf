#include "main.h"

/**
 * char_print - prints a character
 * @arg: list of arguments
 *
 * Return: the amount of characters printed
 */
int char_print(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}


/**
 * str_print - a function that prints a string
 * @arg: argument pointers
 * Return: amount of characters printed
 */
int str_print(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}



/**
 * percent_print - a function that prints a %
 * @arg: argument pointers
 * Return: 1 on success
 */
int percent_print(va_list arg __attribute__((unused)))
{
	_putchar('%');
	return (1);
}



/**
 * int_print - a function that prints an integer
 * @arg: argument pointer
 * Return: 1 on success
 */
int int_print(va_list arg)
{
	int num;

	num = num_print(arg);
	return (num);
}

