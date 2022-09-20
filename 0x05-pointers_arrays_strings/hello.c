#include <stdio.h>

int main (void)
{
	int array[5];
	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	array[3] = 3;
	array[4] = 4;
	array[5] = 5;

	int arraysize = (sizeof (array) / sizeof (array[0])) + 1;

	int n = (arraysize % 2 == 0) ? arraysize / 2 : (arraysize - 1) / 2;

	printf ("n: %d \n", n);

	for (n; n < arraysize; n++)
			printf ("%d",array[n]);
	return 0;
}
