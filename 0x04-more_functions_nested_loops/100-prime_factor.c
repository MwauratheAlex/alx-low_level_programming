#include "main.h"
#include <math.h>
/**
 * main -  finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i;
	unsigned long sqrt_n = sqrt(n);

	for (i = 3; i < sqrt_n; i += 2)
	{
		while ((n % i == 0) && n != i)
			n = n / i;
	}

	printf("%lu\n", n);

	return (0);
}

