#include <stdio.h>

/**
 * main - Entry point
 * print print combination of two two-digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	n = 0;
	while (n < 10)
	{
		putchar('0' + n % 10);
		putchar('\n');
		n++;
	}
	putchar('\n');
	return (0);
}
