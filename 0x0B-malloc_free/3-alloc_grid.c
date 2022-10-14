#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the array
 *
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **pp;

	if (width <= 0 || height <= 0)
		return (NULL);
	pp = malloc(height * sizeof(int *));

	if (pp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		pp[i] = malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			pp[i][j] = 0;
	}

	return (pp);
}

