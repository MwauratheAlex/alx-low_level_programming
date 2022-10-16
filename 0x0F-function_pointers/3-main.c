#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculator
 *
 * @argc: arguement count
 *
 * @argv: argurment vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int first, second, result;
	int (*fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first = atoi(argv[1]);
	second = atoi(argv[3]);

	if (second == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	fun_ptr = get_op_func(argv[2]);

	if (fun_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = fun_ptr(first, second);
	printf("%d\n", result);
	return (0);
}
