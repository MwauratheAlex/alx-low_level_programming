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
	char *buffer = src;

	while (*src != '\0')
		*dest++ = *src++;

	while (*buffer != '\0')
		_putchar(*buffer++);

	_putchar('\n');


	*(dest + 1) = '\0';

	return (dest);
}
