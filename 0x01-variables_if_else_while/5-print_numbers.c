#include <stdio.h>

/**
 * main - Entry point
 * print digits of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
