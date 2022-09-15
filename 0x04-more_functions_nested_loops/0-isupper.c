#include <stdio>

/**
 * main - checks if character is uppercase
 *
 * input: c
 *
 * Return: 1 if c is uppercace, 0 if lower case
 */
int _isupper(int c)
{
	if (c >= 97 and c <= 122)
		return (1);
	else
		return (0);
}
