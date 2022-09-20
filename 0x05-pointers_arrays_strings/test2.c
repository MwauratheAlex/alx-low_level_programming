#include <stdio.h>

int main (void)
{
	char *str = "0123456";

	int stringsize = 0;

	char *buffer = str;

	while (*buffer++ != '\0')
		stringsize ++;

	printf ("stringsize: %d\n", stringsize);

	int n = (stringsize % 2 == 0) ? stringsize / 2 : (stringsize + 1) / 2;

	printf ("n: %d\n", n);


	for (n; n < stringsize; n++)
		printf ("%c", *(str + n));

	return (0);
}
