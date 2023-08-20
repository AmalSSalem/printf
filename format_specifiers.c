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
		str = "(nil)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

int percent_print(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
