#include "main.h"

/**
 * num_print - prints a number
 * @ap: argument pointer
 * Return: lenght of the printed arguments
 */
int num_print(va_list ap)
{
	unsigned int check_num;
	int ap_num, divisor = 1, int_count = 0;

	ap_num = va_arg(ap, int);

	if (ap_num < 0)
	{
		int_count += _putchar('-');
		check_num = ap_num * (-1);
	}
	else
		check_num = ap_num;

	while (check_num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		int_count += _putchar('0' + check_num / divisor);
		check_num %= divisor;
		divisor /= 10;
	}

	return (int_count);
}