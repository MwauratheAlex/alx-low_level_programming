#include "main.h"

/**
 * get_no_of_words - returns the number of words in a string
 * where the delimeter = ' '
 *
 * @s: the string
 *
 * Return: number of words in s
 */

int get_no_of_words(char *s)
{
	int i;
	int no_of_words = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
			no_of_words++;
	}

	return (no_of_words);
}

/**
 * strtow - splits a string into words
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 *
 * @str: the sting
 *
 * Return: a pointer to an array of strings (words) or
 * NULL if str == NULL or str == "" or if function fails
 */
char **strtow(char *str)
{
	char **words;
	int no_of_words = 0;
	int word_len = 0;
	int i = 0;
	int j = 0;
	int k;

	if (str == NULL)
		return (NULL);

	no_of_words = get_no_of_words(str);

	words = malloc(sizeof(char *) * no_of_words);
	if (words == NULL)
		return (NULL);

	words[no_of_words - 1] = NULL;
	i = 0;

	for (k = 0; k < no_of_words - 1; k++)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		for (j = i; str[j] != ' '; j++)
			word_len++;

		words[k] = malloc(sizeof(char) * word_len);
		j = 0;
		while (str[i] != ' ')
		{
			words[k][j] = str[i];
			j++;
			i++;
		}
		words[k][j] = '\0';
	}

	return (words);
}
