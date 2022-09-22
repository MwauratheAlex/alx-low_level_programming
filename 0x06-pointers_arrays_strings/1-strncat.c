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
	int i = 0;
	char *dest_ptr = *dest, *src_ptr = *src;

	while (*dest_ptr)
		dest_ptr++;

	while (*src_ptr)
	{
		if (i >= n)
			break;
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		i++;
	}
	*dest_ptr = '\0';

	return (dest);
}
