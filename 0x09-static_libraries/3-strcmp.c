#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to first string
 *
 * @s2: pointer to second string
 *
 * Return: 0 if s1 == s2, else return s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (s1[i] - s2[i]);
}
