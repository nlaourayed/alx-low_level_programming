#include "main.h"

/**
 * print_alphabet  - Print Alphabet
 * function that prints alphabets
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

/**
 * print_alphabet_x10  - Print Alphabet 10 tinmes
 * function that prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for(i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
