#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number
 *
 * Return: nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;

	if (max == 0)
		return (-1);
	if (n & max)
		return (1);
	else
		return (0);
}

