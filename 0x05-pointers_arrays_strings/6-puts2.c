#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer to the string
 *
 * Return: 0
 */
void puts2(char *str)
{
	while (true)
	{
		if (*str + 1 == '\0')
			break;

		_putchar (*str++);

		if (*str + 1 == '\0')
			break;
		*str++;
	}
}
