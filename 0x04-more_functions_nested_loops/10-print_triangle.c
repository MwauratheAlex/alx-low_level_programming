#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= size; i++)
	{
		for (j = 0; j < k; j++)
		{
			_putchar(' ');
		}
		for (; j < size; j++)
			_putchar('#');
		k -= 1;
		_putchar('\n');
	}
}
