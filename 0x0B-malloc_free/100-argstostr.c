#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all the arguments to the program
 *
 * @ac: arguement count
 *
 * @av: arguement vector
 *
 * Return:  a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	size_t j;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]);

	len += ac - 1;
	str = malloc(sizeof(char) * len);
	len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[len] = av[i][j];
			len++;
		}

		if (i != ac - 1)
		{
			str[len] = '\n';
			len++;
		}
	}
	str[len] = '\0';

	return (str);
}
