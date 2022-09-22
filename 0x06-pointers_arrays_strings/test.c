#include <stdio.h>
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}
int main (void)
{
	printf ("z is: %d	", 'z');//97 -> 122
	printf ("A is: %c\n", 'z'-32);

	 char str[] = "Look up!\n";
	 char *ptr;
	
	 int i = 0;
	 while (str[i] != '\0')
	 {
		 if (str[i] >= 97 && str[i] <= 122)
		 {
		 	str[i] -= 32;
		 }
		 i++;
	 }
	 printf ("%s", str);

	return (0);
}
