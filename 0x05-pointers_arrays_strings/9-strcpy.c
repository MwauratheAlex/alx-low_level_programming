#include "main.h"

/**
 * _strcpy - copies a string to  a buffer
 *
 * @dest: pointer to the string buffer
 *
 * @src: pointer to the string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';

	return (dest);
}
