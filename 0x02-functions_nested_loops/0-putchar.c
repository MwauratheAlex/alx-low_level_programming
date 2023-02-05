#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char *str = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(str[i]);
	putchar('\n');

	return (0);
}
