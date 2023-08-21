#include "main.h"

/**
 * main - Entry
 *
 * Return: 0 on success
 */
int main(void)
{
	int len, len2 __attribute__((unused));

	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d]\n", len);
	_printf("String:[%s]\n", "i am a string !");
	return (0);
}
