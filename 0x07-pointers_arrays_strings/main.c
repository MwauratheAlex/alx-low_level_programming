#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: ALways 0
 */
int main(void)
{
	char *s = "hello";
	char *f;
	f = _strchr(s, 'o');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}

