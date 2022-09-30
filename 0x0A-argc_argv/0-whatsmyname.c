#include "main.h"

/**
 * main - prints program name, followed by a new line
 *
 * @argc: arguement count
 *
 * @argv: arguement vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	print_str(argv[0]);
	(void)argc;

	return (0);
}

/**
 * print_str - prints a string
 *
 * @s: string
 *
 * Return:  nothing
 */
void print_str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
