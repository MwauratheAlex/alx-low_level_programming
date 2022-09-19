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
	int str_len = 0;

	while (*s++ != '\0')
		str_len++;

	while (str_len != 0)
	{
		_putchar (*s + str_len--);
	}

	_putchar ('\n');
}
