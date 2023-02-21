#include "main.h"

/**
 * print_alphabet  - Print Alphabet
 * function that prints alphabets
 * Return: Always 0 (Succsses)
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
