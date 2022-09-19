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
	int i, n, t;

	i = 0;
	t = *str

	while (*s++ != '\0')
		i++;

	*s = t

	n = (strlen % 2 == 0) ? strlen / 2 : (strlen - 1) / 2;

	while (str[n] != '\0')
	{
		_putchar (str[n]);
		n++;
	}

	_putchar ('\n');
}
