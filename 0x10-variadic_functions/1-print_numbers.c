#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: the string to be printed between numbers
 *
 * @n: the number of integers passed to the function
 *
 * @...: arguements to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
		(i != n - 1) ? 
			printf("%d%s", va_arg(args, int), separator) : 
			printf("%d\n", va_arg(args, int));
}
