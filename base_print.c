#include "main.h"
#include <math.h>
/**
 * bin_print - prints a number
 * @ap: argument pointer
 * Return: lenght of the printed arguments
 */
int bin_print(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 2, 0);

	return (_puts(str));
}
int unsigned_print(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 10, 0);

	return (_puts(str));
}

