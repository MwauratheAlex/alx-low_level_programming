#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: number of bytes from s2 to be concatenated
 *
 * Return: pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
	{
		s2 = "";
		n = 0;
	}

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if (n >= len2)
		n = len2;

	len = n + 1;

	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len++;

	p = malloc(len * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (; i < len; i++)
	{
		p[i] = s2[j];
		j++;
	}
	p[i] = '\0';

	return (p);
}
