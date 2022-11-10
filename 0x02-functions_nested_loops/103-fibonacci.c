#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 * starting with 1 and 2, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i = 1;
	unsigned long j = 2;
	unsigned long k = i + j;
	unsigned long sum = 2;

	while (k <= 4000000)
	{
		if (k % 2 == 0)
			sum += k;
		i = j;
		j = k;
		k = i + j;
	}

	printf("%lu\n", sum);

	return (0);
}

