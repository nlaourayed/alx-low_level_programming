#include <stdio.h>

/**
 * main - Entry point
 * print digits followed by ,
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '0')
			putchar(' ');
		putchar(a);
		if (a != '9')
			putchar(',');
	}
	putchar('\n');
	return (0);
}
