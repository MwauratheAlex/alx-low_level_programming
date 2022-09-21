#include <stdio.h>

int main (void)
{
	char s1[98] = "Hello";
	char s2[] = "World\n";
	char *ptr;

	int i, n = 1;

	printf ("s1: %s\n", s1);
	printf("s2: %s", s2);

	//pointer to the first string
	char *ptr_s1 = s1, *ptr_s2 = s2;

	printf ("s1 ptr: %c\n", *ptr_s1);
	//Push pointer to the end
	while (*ptr_s1)
		ptr_s1++;
	//Concat
	i = 0;
	while (*ptr_s2)
	{
		if (i >= n)
			break;
		*ptr_s1 = *ptr_s2;
		ptr_s1++;
		ptr_s2++;
		i++;
	}

	//Add '\0'
	*ptr_s1 = '\0';

	printf ("\nnew s1: %s\n", s1);


	return (0);
}
