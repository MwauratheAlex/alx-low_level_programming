#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints n opcode of a function
 *
 * @ptr: pointer to the function
 *
 * @n: number of opcodes to print
 *
 * Return: nothing
 */
void print_opcodes(char *ptr, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
		printf("%.2hhx%s", *(ptr + i), i < (n - 1) ? " " : "\n");
}

/**
 * main - prints the opcodes of its own main function
 * Usage: ./main number_of_bytes
 *
 * @argc: arguement count
 *
 * @argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int no_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no_of_bytes = atoi(argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)main, no_of_bytes);

	return (0);
}
