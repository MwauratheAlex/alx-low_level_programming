/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: number
 *
 * index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0x01;

	if (index > 64)
		return (-1);

	mask <<= index;

	*n = *n | mask;

	return (1);
}
