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

	for (i = 0; i < n; i++)
	{
		if (i != n -1)
			printf("%d, ", a[i]);
	}
}
