#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * @str: string
 *
 * Return: a pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	int i, len;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		continue;

	len = i + 1;

	p = (char *) malloc(len * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = str[i];

	return (p);
}
