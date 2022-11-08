/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: first number
 *
 * @m: second number
 *
 * Return: 1 if successful, -1 if not
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, mask;

	mask = n ^ m;

	while (mask > 0)
	{
		count++;
		mask &= (mask - 1);
	}

	return (count);
}
