#include "main.h"
/**
 * print_square - print a square
 *
 * @size: size of the square
 *
 * Return:0
 */
void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
