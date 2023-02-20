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

	a = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == 56 && b == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
