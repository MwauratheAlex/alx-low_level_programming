#include <stdio.h>

/**
 * main - prints a triangle
 *
 * Return: 0
 */
int main(void)
{
	int n = 10;
	int i = 0;
	int j = 0;

	while (i <= n)
	{
		if (i != 0)	
		{
			while (j < n-i)
			{
				putchar(' ');
				j++;
			}
			while (j < n)
			{
				putchar('#');
				j++;
			}
			putchar('\n');
		}
		j = 0;
		i++;
	}

	return (0);
}
