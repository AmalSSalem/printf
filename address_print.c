#include "main.h"
/**
 * address_print - prints address of input
 * in hexa decimal format
 * @ap: va_list arguments from _printf
 * Return: number of char printed
 */
int address_print(va_list ap)
{
	char *str;
	unsigned long int p = va_arg(ap, unsigned long int);

	register int count = 0;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
