#include "main.h"
#include <math.h>
/**
 * bin_print - prints a number
 * @ap: argument pointer
 * Return: lenght of the printed arguments
 */
int bin_print(va_list ap)
{
	unsigned int check_num;
	int num, divisor = 1, int_count = 0;
	char *bin_array;

	num = va_arg(ap, unsigned int);
	bin_array = malloc(ceil(log2(num)));
	/* ceil to round up */
	while (num != 0)
	{
		check_num = num % 2;
		_putchar('0' + (check_num));
		num /= 2;
	}

	return (ceil(log2(num)));
}

