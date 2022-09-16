#include "main.h"

/**
 * print_line - prints the character '_' n times
 *
 * @n: The number of times the character '_' is printed
 *
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

	}
	_putchar('\n');
}




