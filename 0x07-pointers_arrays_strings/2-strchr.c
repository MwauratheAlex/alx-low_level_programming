/**
 * _strchr - locates a character in a string
 *
 * @s: string
 *
 * @c: character to be located
 *
 * Return: pointer to first occurence of character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s++ == c)
			return (s - 1);
	}
	return (s);
}
