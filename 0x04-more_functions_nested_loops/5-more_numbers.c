#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 10 times
 *
 * Return: Always return 0
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i <= 14)
	{
		_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
		_putchar('\n');
		i++;
	}
}
