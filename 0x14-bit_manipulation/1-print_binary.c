#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 32768, flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1 && !(n & mask))
		{
			putchar('0');
		}
		mask >>= 1;
	}
}

