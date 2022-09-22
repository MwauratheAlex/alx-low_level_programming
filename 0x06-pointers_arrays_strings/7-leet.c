#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: pointer to the string
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i = 0,j;
	char *letters = "aAeEoOtTlL";
	int numbers[] = {4,4,3,3,0,0,7,7,1,1};

	while (str[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (letters[j] == str[i])
				str[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (str);
}
