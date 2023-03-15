#include "stdio.h"

void int_to_binary(int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			int_to_binary(n >> 1);
		printf("%d", (n & 1));
	}
	else
	{
		printf("0");
	}
}

int main(void)
{
	int_to_binary(25);
	printf("|-->\t[25]\n");
	int_to_binary(0);
	printf("|-->\t\t[0]\n");
	int_to_binary(2);
	printf("|-->\t\t[2]\n");
	int_to_binary(1);
	printf("|-->\t\t[1]\n");
	int_to_binary(3782);
	printf("|-->[3782]\n");
	return (0);
}
