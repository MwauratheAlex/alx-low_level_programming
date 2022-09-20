#include "main.h"

/**
 * print_array - print n elements of an array
 *
 * @a: pointer to the array
 *
 * @n: number of elements
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		(i != n - 1) ? printf("%d, ", a[i]) : printf("%d\n", a[i]);
}
