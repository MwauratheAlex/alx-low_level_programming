#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: number of bytes from src concatenated onto dest
 *
 * Return: A pointer to the resulting destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
	return (dest);
}
