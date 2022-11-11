#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: integer
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i == n && j == n)
				break;
			if ((i * j) < 10)
				printf("%d,   ", (i * j));
			else if ((i * j) < 100)
				printf("%d,  ", (i * j));
			else
				printf("%d, ", (i * j));
		}
		if (i == n && j == n)
			break;
		printf("\n");
	}
	printf("%d\n", (i * j));
}

