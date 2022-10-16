#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * @c: character
 *
 * Return: 1 if c is lower, 0 otherwise
 */
int _islower(int c)
{
	return (((c >= 'a') && (c <= 'z')) ? 1 : 0);
}
