#include <stdio.h>

/**
 * main - Entry point
 * print print combination of 2 digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a != b && b != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == 55 && b == 56 && c == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
