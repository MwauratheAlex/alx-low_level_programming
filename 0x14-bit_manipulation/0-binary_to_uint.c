#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if ((b[len] != '1' && b[len] != '0'))
			return (0);
	}


	for (; len > 0; len--)
	{
		if (b[len - 1] == '0')
			i += 0;
		else if (b[len - 1] == '1')
			i += (1 << j);
		j++;
	}

	return (i);
}
