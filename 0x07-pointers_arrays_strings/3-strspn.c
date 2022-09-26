/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: initial segment
 *
 * @accept: substring
 *
 * Return: number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}


	return (k);
}
