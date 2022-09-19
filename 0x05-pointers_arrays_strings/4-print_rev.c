#include "main.h"

/**
 * print_rev- prints a string in reverse followed by a new line
 *
 * @s: pointer to the string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i, str_len = 0;

	while (*s++ != '\0')
		str_len++;

	for (i = str_len - 1; i >= 0; i--)
		_putchar (*(s + i));

	_putchar ('\n');
}
