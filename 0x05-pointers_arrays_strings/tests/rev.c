#include <stdio.h>

int main (void)
{
	char s[] = "Mwauraa";
	int i, len;
	char *end = s;
	char temp;

	printf("s: %s\n", s);

	len = 0;
	while (*end++ != '\0')
		len++;

	printf("len: %d\n", len);
	end = end - 2;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = s[i];
		s[i] = temp;
		end--;
	}

	printf("s_rev: %s\n", s);

	return (0);
}
