#include "main.h"

/**
 * _strncpy - copies a string from src to dest
 *
 * @dest: pointer to destination string
 *
 * @src: pointer to source string
 *
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
