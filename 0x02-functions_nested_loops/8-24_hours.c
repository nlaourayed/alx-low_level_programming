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

	while (hh <= 23)
	{
		mm = 0;
		while (mm < 60)
		{
			_putchar(hh);
			_putchar('/');
			_putchar('0' + hh);
			mm++;
		}
		hh++;
	}
}
