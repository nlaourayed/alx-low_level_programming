#include "main.h"

/**
 * jack_bauer - Print evrey muinit
 * in the day
 */
void jack_bauer(void)
{
	int mm;
	int hh;

	hh = 0;
	mm = 0;

	while (hh <= 5)
	{
		mm = 0;
		while (mm < 2)
		{
			_putchar(mm);
			_putchar('/');
			_putchar('/');
			_putchar('0' + mm);
		}
		hh++;
	}
}
