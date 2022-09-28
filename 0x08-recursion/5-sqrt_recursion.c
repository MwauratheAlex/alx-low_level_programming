#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: squareroot of n
 * or -1 if n has no natural squareroot
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_wrapper(n, 1));
}

/**
 * _sqrt_wrapper - returns square root of a number
 *
 * @n: number
 *
 * @guess: initial guess
 *
 * Return: sqrt of n
 */
int _sqrt_wrapper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess < n)
		return (_sqrt_wrapper(n, guess + 1));
	return (-1);
}
