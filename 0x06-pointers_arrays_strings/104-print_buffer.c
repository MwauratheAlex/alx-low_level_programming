#include "main.h"
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 *
 * @b: buffer
 *
 * @size: size of the buffer
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i = 0, j, k;

	while (i < size)
	{
		if (i % 10 == 0)
		{
			if (i != 0)
			{
				for (j = i - 10; j < i; j++)
				{
					if (isprint(b[j]))
						printf("%c", b[j]);
					else
						printf(".");
				}
				printf("\n");
			}
			printf("%08x: ", i);
		}

		printf("%02x%02x ", b[i], b[i + 1]);
		i += 2;
	}
	k = i;
	for (; i % 10 != 0; i += 2)
		printf("     ");
	for (j = i - 10; j < k; j++)
	{
		if (isprint(b[j]))
			printf("%c", b[j]);
		else
			printf(".");
	}
}
