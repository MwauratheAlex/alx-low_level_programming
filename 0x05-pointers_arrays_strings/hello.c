#include <stdio.h>

int main (void)
{
	int array[5];
	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	
	int n = 2;
	int i;


	printf ("n: %d\n", n);
	for (i = 0; i < n; i++)
			printf ("%d",array[i]);
	return 0;
}
