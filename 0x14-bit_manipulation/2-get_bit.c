#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 *
 * @index: the index, starting from 0 of the bit you want to get
 *
 * @n: number
 *
 * Return:  the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0x01;

	mask <<= index;

	if (mask == 0 || index > 64)
		return (-1);
	if ((n & mask))
		return (1);
	return (0);
}

