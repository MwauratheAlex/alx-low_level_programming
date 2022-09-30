#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: arguement count
 *
 * @argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	_putchar((argc - 1) + '0');
	(void)argv;
	_putchar('\n');

	return (0);
}
