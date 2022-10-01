#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive number
 *
 * @argc: argument count
 *
 * @argv: arguent vector
 *
 * Return: 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num >= 0)
			sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
