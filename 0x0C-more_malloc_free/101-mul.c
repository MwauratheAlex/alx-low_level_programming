#include "main.h"
/**
 * main - multiplies two positive numbers
 * Print the result, followed by a new line
 * Usage: mul num1 num2
 *
 * num1 and num2 will be passed in base 10
 *
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 *
 * num1 and num2 should only be composed of digits. If not, print Error,
 * followed by a new line, and exit with a status of 98
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	long num1, num2;
	char *endptr1, *endptr2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = strtol(argv[1], &endptr1, 10);
	num2 = strtol(argv[2], &endptr2, 10);

	if (*endptr1 != '\0' || *endptr2 != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	printf("%ld\n", num1 * num2);
	return (0);
}
