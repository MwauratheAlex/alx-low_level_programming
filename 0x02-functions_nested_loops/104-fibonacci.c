#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	long i = 1;
	long j = 2;
	long k = i + j;
	long i_1, i_2, j_1, j_2, k_1, k_2;
	int count = 3;
	int first_time = 1;

	printf("%lu, %lu, ", i, j);

	while (count < 98)
	{
		if (count >= 93)
		{
			if (first_time == 1)
			{
				i_1 = i / 10000000000;
				j_1 = j / 10000000000;
				i_2 = i % 10000000000;
				j_2 = j % 10000000000;
				first_time = 0;
			}

			k_1 = i_1 + j_1;
			k_2 = i_2 + j_2;

			if (k_2 > 9999999999)
			{
				k_1 += 1;
				k_2 %= 10000000000;
			}	
			printf("%lu%lu, ", k_1, k_2);
			
			i_1 = j_1;
			i_2 = j_2;
			j_1 = k_1;
			j_2 = k_2;
			count++;

			continue;
		}
		
		printf("%lu, ", k);
		i = j;
		j = k;
		k = i + j;
		count++;
	}

	printf("%lu%lu\n", (k / 10000000000), (j % 10000000000));



	return (0);
}

