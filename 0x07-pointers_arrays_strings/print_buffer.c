#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 *
 * @buffer: address in memory to print
 *
 * @size: size of the momory to print
 *
 * Return: nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;

	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
