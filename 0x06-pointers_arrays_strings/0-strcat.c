#include <main.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: A pointer to the resulting destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
