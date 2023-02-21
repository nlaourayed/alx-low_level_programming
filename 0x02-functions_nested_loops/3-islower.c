#include "main.h"

/**
 * _islower - Is LowerCase
 * check if the character is an lowercase alphabet
 * @c: is the character to be checked
 *
 * Return: 1 if true and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);	
}
