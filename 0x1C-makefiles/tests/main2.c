#include "main.h"
/**
 * main2 - check reuse of add
 *
 * Return: 0
 */
int main(void)
{
	int a = 6;
	int b = 7;
	int c = add(a, b);
	int d = add(b, c);
	int e = add(c, d);

	printf("a: %d\nb: %d\nc(a + b): %d\nd(b + c): %d\ne(c + d): %d\n", a, b, c, d, e);
	return (0);
}
