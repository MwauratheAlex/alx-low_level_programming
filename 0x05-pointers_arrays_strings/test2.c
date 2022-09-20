#include <stdio.h>

int main (void)
{
	char *str = "0123456789";

	int stringsize = sizeof(str) / sizeof(str[0]) + 2;

	printf ("stringsize: %d\n", stringsize);

	int n = (stringsize % 2 == 0) ? stringsize / 2 : (stringsize - 1) / 2;

	printf ("n: %d\n", n);


	for (n; n < stringsize; n++)
		printf ("%c", *(str + n));

	return (0);
}
