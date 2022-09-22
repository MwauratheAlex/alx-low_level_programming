#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to the array
 *
 * @n: number of elements in the array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, j = 0;

	for (; i >= 0; i--)
	{
		a[i] = a[j];
		j++;
	}
}
