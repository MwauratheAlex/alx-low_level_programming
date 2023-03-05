#include <string.h>

int is_palindrome_wrapper(char *s, int len, int i)
{
	if (s[i] != s[(len - 1) - i])
		return (0);

	if (i == (len / 2) - 1)
		return (1);

	return (is_palindrome_wrapper(s, len, i + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return(1);

	return (is_palindrome_wrapper(s, len, 0));
}
