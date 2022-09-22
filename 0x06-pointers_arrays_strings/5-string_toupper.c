#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: pointer to the sting
 *
 * Return: pointer to changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
