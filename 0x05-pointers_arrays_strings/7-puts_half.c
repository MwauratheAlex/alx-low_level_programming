#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 *
 * @str: pointer to the string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int strlen = 0;

	char *buffer = str;

	while (*buffer++ != '\0')
		strlen++;

	int n = (strlen % 2 == 0) ? strlen / 2 : (strlen - 1) / 2;

	for (; n < strlen; n++)
		_putchar (*(str + n));
}
