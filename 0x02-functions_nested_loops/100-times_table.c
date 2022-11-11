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
	int i, j, product;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j != 0)
			{
				if (product < 10)
					printf("   ,");
				else if (product < 100)
					printf("  ,");
				else
					printf(" ,");
			}
			printf("%d", product);
		}
		printf("\n");
	}
}

