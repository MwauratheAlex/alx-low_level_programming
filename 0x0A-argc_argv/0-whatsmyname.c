#include <stdio.h>

/**
 * main - prints program name, followed by a new line
 *
 * @argc: arguement count
 *
 * @argv: arguement vector
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char const *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
