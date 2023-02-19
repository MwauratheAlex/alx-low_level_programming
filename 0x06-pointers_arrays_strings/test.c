#include <stdio.h>

int main (void)
{
	char ch = 'a', en;

	if (ch >= 'A' + 13)
	{
		en = 'A' + (12 - ('Z' - ch));
		printf("%d\n", 12 - ('Z' - ch));
	}
	else
		en = ch + 13;
	printf("\n%c\n", en);
	return 0;
}
