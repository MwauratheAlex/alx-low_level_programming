#include "main.h"

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
	char *p;
	int i,j;

	if(ac == 0 || av == NULL)
		return (NULL);

	p = malloc(ac * sizeof(char
