#include <stdlib.h>
/**
 * create_array - creates an array of chars, initializes it with char
 *
 * @size: size of the array
 *
 * @c: character
 *
 * Return: pointer to array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
