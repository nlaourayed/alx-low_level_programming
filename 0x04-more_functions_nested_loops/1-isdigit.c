#include "main.h"

/**
 * _isdigit - check if the char is digital numbeer from 0 to 9
 * @c: theint
 *
 * Return: 0 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
		return (1);
	return (0);
}
