#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: arguement count
 *
 * @argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		print_str("Error\n");
		return (1);
	}

	mul = (argv[1]) * atoi(argv[2]);
	print_str

	
