#include "main.h"

/**
 * main - prints all arguments it receives
 *
 * @argc: arguement count
 *
 * @argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print_str(argv[i]);
		print_str("\n");
	}

	return (0);
}

/**
 * print_str - prints a string
 *
 * @s: string
 *
 * Return: 0
 */
void print_str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
