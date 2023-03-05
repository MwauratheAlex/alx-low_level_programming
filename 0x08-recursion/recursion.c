#include <stdio.h>
#include "main.h"

int factorial(int n)
{
	if (n <= 1)
		return(1);
	return (n * factorial(n - 1));
}

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (str_len(s + 1) + 1);
}

int pow_rec(int x, int y)
{
	if (y <= 1)
		return (x);
	return (x * pow_rec(x, y - 1));
}


int sqrt_wrapper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess < n)
		return (sqrt_wrapper(n, guess + 1));
	else
		return (-1);
}

int sqrt_rec(int n)
{
	return (sqrt_wrapper(n, 1));
}
int main(void)
{
	char *s = "mwaura";

	print_rev(s);

	printf("\n");

	printf("len: %d\n", str_len(s));

	printf("5^3: %d\n", pow_rec(5, 3));

	printf("sqrt(82): %d\n", sqrt_rec(82));

	return (0);
}
