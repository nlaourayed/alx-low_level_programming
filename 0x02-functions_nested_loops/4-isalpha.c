#include "main.h"

/**
 * _isalpha - checkk if alphabet 
 * check the given char if aplhabet upper/lower case
 * @c: char to be checked
 *
 * Return: 1 if c ia a letter , 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
