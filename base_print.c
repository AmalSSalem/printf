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

/**
 * octal_print - printing octal
 * @ap: variadic list passed 
 * @return number of characters 
 */
int octal_print(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 8, 0);

	return (_puts(str));
}

/**
 * HEXA_print - printing hexa decimals uc
 * @ap: variadic list passed 
 * @return number of characters 
 */
int HEXA_print(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 16, 0);

	return (_puts(str));
}

/**
 * hexa_print - printing hexa decimals lc
 * @ap: variadic list passed 
 * @return number of characters 
 */
int hexa_print(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 16, 1);

	return (_puts(str));
}

/**
 * unsighed_print - printing usigned integers
 * @ap: variadic list passed 
 * @return number of characters 
 */
int unsigned_print(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 10, 0);

	return (_puts(str));
}

