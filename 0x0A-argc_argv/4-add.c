#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: arguement count
 *
 * @argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);

	printf("%d\n", sum);

	return (0);
}
