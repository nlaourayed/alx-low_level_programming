#include "main.h"

/**
 * print_last_digit - Print It
 * print the last digit of the number
 * @n: the number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = (last_digit * -1);
	_putchar(last_digit + 48);
	return (last_digit);
}
