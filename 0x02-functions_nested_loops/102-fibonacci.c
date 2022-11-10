#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	long i = 1;
	long j = 2;
	long k = i + j;
	int count = 2;

	printf("%lu, %lu, ", i, j);

	while (count < 50)
	{
		printf("%lu, ", k);
		i = j;
		j = k;
		k = i + j;
		count++;
	}

	printf("%lu\n", k);

	return (0);
}

