#include "main.h"

/**
 * digit_counter - a function that takes an int and counts 
 * digits it's formed of
 * @num: the int number
 * Return: the number of digits
 */
int digit_counter(int num)
{
	int counter = 0;
	if (num == 0)
		return (1);

	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}
