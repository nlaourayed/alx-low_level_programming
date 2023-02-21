#include "main.h"

/**
 * print_sign - print the sign
 * of the digit
 * @n: the digit
 * Return: 1 if is grater than 0 ,0 if is zero ,-1 if is lower than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
