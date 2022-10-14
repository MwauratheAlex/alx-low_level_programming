#include "main.h"
#include <stdlib.h>

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
	int **pp;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	pp = malloc(height * sizeof(int *));
	if (pp == NULL)
	{
		free(pp);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pp[i] = malloc(width * sizeof(int));
		if (pp[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(pp[i]);
			free(pp);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			pp[i][j] = 0;

	return (pp);
}
