#include <stdio.h>

/**
 * main - Entry point
 * print digits in base16
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
