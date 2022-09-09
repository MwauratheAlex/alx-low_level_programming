#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i % 10 + '0');
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
