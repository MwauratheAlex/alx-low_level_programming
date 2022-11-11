#include <stdio.h>
#include "main.h"

/**
 * fibonnachi_98 - print first 98 fibonnachi characters
 *
 * Return: nothing
 */
void fibonnachi_98(void)
{
	unsigned long i = 1;
	unsigned long j = 2;
	unsigned long k = i + j;
	unsigned int count = 3;

	printf("%lu, %lu, ", i, j);

	while (count < 93)
	{
		printf("%lu, ", k);
		i = j;
		j = k;
		k = i + j;
		count++;
	}
	fibonnachi_93_98(i, j);
}

/**
 * fibonnachi_93_98 - prints fibonnachi numbers form 93->98
 *
 * @i: 91st fibonnachi number
 *
 * @j: 92nd fibonnachi number
 *
 * Return: nothing
 */

void fibonnachi_93_98(unsigned long i, unsigned long j)
{
	unsigned long i_1, i_2, j_1, j_2, k_1, k_2, count;

	i_1 = i / 10000000000;
	i_2 = i % 10000000000;

	j_1 = j / 10000000000;
	j_2 = j % 10000000000;

	for (count = 93; count < 99; count++)
	{
		k_1 = i_1 + j_1;
		k_2 = i_2 + j_2;

		if ((i_2 + j_2) > 9999999999)
		{
			k_1 += 1;
			k_2 %= 10000000000;
		}

		printf("%lu%lu", k_1, k_2);
		if (count != 98)
			printf(", ");

		i_1 = j_1;
		i_2 = j_2;
		j_1 = k_1;
		j_2 = k_2;
	}
}

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	fibonnachi_98();
	printf("\n");

	return (0);
}

