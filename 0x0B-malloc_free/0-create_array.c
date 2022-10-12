#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 *
 * @size: size of the array
 *
 * @c: character
 *
 * return: pointer to array or NULL if fail
 */
 char *create_array(unsigned int size, char c)
{
	void *p = malloc(sizeof(char) * size);
	int i;

	for (i = 0; i < size; i++)
		p[i] = c;
	
	return (p);
}
