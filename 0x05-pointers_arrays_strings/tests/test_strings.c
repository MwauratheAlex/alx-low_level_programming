#include <stdio.h>
#include <string.h>

int main (void)
{
	char s1[] = "Hello";
	char s2[] = "Hello";
	char s3[] = "worldz";
	char s4[] = "el";

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s\n", s3);
	printf("s4: %s\n", s4);

	char *s5;
	strcpy(s5, s1);
	printf("len(s5 + s3): %d", strcmp("Hello", "hellozz"));

	return (0);
}
