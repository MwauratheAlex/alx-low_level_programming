#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
