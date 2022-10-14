#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second sring
 *
 * Return: pointer to a newly allocated space in memory which contains s1
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	len = i;
	for (i = 0; s2[i] != '\0'; i++)
		continue;
	len += (i + 1);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = (char *) malloc(len * sizeof(char));

	for (j = 0; s1[j] != '\0'; j++)
		p[j] = s1[j];
	for (i = 0; s2[i] != '\0'; i++)
	{
		p[j] = s2[i];
		j++;
	}
	p[j] = '\0';
	return (p);
}

