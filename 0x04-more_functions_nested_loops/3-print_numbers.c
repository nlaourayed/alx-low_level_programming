#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always return 0
 */
int main(void)
{
	print_numbers();
	return (0);
}
void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
