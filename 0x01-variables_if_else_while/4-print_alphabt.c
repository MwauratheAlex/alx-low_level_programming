#include <stdio.h>

/**
 * main - Entry point
 *
 * print alphabet but q and e
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != (int)('q') && i != (int)('e'))
			putchar(i);
	}
	putchar('\n');

	return (0);
}
