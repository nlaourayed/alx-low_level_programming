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
			if (mm < 10)
				_putchar(48);
			_putchar(mm + 48);
			_putchar(':');
			if (hh < 10)
				_putchar(48);
			_putchar(mm + 48);
			mm++;
		}
		hh++;
	}
}
