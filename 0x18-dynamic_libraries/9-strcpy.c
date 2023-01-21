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
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
