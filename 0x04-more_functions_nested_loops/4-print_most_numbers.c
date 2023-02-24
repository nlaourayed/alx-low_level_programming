#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2, 4
 *
 * Return: Always return 0
 */
int main(void)
{
	print_most_numbers();
}
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 52 || i == 50)
		{
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
