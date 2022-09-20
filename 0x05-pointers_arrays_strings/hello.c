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

	int n = 2;
	int i;


	printf ("n: %d\n", n);
	for (i = 0; i < n; i++)
			printf ("%d",array[i]);
	return 0;
}
