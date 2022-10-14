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
	char *p;
	unsigned int len1, len2, len_tot, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	len_tot = len1 + n;

	p = malloc(len_tot + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len_tot; i++)
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len1];

	p[i] = '\0';

	return (p);
}
