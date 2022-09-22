#include "main.h"

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
	char *dest_ptr = *dest, *src_ptr = *src;

	while (*dest_ptr)
		dest_ptr++;

	while (*src_ptr)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	*dest_ptr = '\0';
	return (dest);
}
