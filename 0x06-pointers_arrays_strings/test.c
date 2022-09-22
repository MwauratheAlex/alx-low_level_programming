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
	int n;
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	n = sizeof(a) / sizeof(int);

	print_array(a, n);


	int x = 0;
	int y = n - 1;
	int tmp;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
	print_array(a,n);

	return (0);
}
