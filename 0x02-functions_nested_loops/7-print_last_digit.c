#include "main.h"

/**
 * print_last_digit - Print It
 * print the last digit of the number
 * @n: the number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n){
	int last_digit;

	last_digit = n % 10;
	_putchar(n);
	return (last_digit);
}
