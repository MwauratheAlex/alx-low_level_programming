#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: pointer to the string
 *
 * Return: Pointer to capitalized string
 */
char *cap_string(char *str)
{
	int i = 0, j;

	char *sep = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	while (str[i] != '\0')
	{
		j = 0;

		while (sep[j] != '\0')
		{
			if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				if (str[i + 1] != '\0')
					str[i + 1] -= 32;
			}
			j++;
		}
		i++;
	}

	return (str);
}

