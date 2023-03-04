#include <stdio.h>

int main(void)
{
	int i;
	int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	for (i = 0; i < 3 * 3; i++)
	{
		printf("%d ", **array + i);
		if ((i + 1) % 3 == 0)
			printf("\n");
	}

	return (0);
}
