#include "main.h"

/**
 * _isupper - checks if character is uppercase
 *
 * @c: test chatacter
 *
 * Return: 1 if c is uppercace, 0 if lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
