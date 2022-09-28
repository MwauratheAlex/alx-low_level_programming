#include "main.h"
/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: number
 *
 * Return: 1 if n is prime number,
 * or 0 if otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_number_wrapper(n, 2));
}

/**
 * is_prime_number_wrapper - checks if n is prime number
 *
 * @n: number
 *
 * @divisor: number to be divided by
 *
 * Return: 1 if n is prime number,
 * 0 if otherwise
 */
int is_prime_number_wrapper(int n, int divisor)
{
	if (divisor >= n && n > 1)
		return (1);
	else if (n % divisor == 0 || n <= 1)
		return (0);
	return (is_prime_number_wrapper(n, divisor + 1));
}

