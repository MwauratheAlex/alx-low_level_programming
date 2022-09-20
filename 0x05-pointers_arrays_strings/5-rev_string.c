#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: Pointer to the string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int len, i;
	char *begin_ptr, *end_ptr, ch;

	len = 0;
	begin_ptr = s;
	end_ptr = s;

	while (*end_ptr++ != '\0')
		len++;

	end_ptr = end_ptr - 2;

	for (i = 0, i < len / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		end_ptr--;
		begin_ptr++;
	}
}
