/**
 * rot13 - encodes string using rot13
 *
 * @s: string
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char normal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encode[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[i] == normal[j])
			{
				s[i] = encode[j];
				break;
			}
		}
	}

	return (s);
}
