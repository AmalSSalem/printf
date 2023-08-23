#include "main.h"

/**
 * _putchar - writes character to stdout
 * @c: char to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char  c)
{
	char buffer[1024];
	int length = snprintf(buffer, sizeof(buffer), "%s", c);

	write(1, buffer, length);
	return (length);
}

