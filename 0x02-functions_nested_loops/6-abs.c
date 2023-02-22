#include "main.h"

/**
 * _abs - abs of number
 * calculate the absolute value of integer
 * @i: the intiger
 *
 * Return: positive number;
 */
int _abs(int i)
{
	if (i < 0)
		i = (i * (-1));
	return (i);
}
