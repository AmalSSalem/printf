#include "main.h"

/**
 * print_binary - a function that converts a number from base 10 to binary
 * @arg: argument pointer
 * Return: amount of numbers written
 */

int binary_print(va_list arg)
{
	unsigned int check_num;
	int i, count = 0;
	char *str, char *rev_str;

       check_num = va_arg(arg, unsigned int);
       if (check_num == 0)
	       return(_putchar('0'));
       count = base
