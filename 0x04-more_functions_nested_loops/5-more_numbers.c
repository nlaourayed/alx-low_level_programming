#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 10 times
 *
 * Return: Always return 0
 */
void more_numbers(void)
{
	int i,j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
