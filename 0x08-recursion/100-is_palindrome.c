/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = 0;
	int i;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len / 2; i++)
		if (s[i] != s[(len - 1) - i])
			return (0);

	return (1);
}
