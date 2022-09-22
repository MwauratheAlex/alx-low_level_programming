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
	int i = 0, j = n - 1, tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}

