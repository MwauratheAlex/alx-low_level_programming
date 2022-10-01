#include "main.h"

/**
 * _islower - checks if character is lowercase
 *
 * @c: test chatacter
 *
 * Return: 1 if c is lowercace, 0 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
