#include "main.h"

/**
 * print_diagonal - prints a digonal line
 *
 * @n: number of times the character '\' is printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j, k;

		k = 0;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < k; j++)
				_putchar(32);
			_putchar(92);
			k++;
		}
	}
	_putchar('\n');
}
