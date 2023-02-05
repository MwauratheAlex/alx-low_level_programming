#include <stdio.h>

/**
 * main - prints first 50 fibonacchi numbers
 *
 * Return: 0
 */
int main(void)
{
	long prev = 1;
	long curr = 2;
	long sum;
	int i;

	printf("%lu, %lu,", prev, curr);

	for (i = 3; i <= 50; i++)
	{
		sum = prev + curr;
		if (i != 50)
			printf(" %lu,", sum);
		else
			printf(" %lu\n", sum);
		prev = curr;
		curr = sum;

	}
	return (0);
}
