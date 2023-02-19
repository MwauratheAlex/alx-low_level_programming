#include <stdio.h>

int main (void)
{
	int nums[] = {1, 3, 5, 6, 7};
	int i;
	int *p;

	for (i = 0; i < 5; i++)
		printf("%d: %d address: [%x]\n", i, nums[i], &nums[i]);

	p = &i;
	printf("\ni: %d, p(address): %x, *p(thing pointed to by p): %d\n", i, p, *p);

	p = NULL;
	printf("\np(NULL): %x\n", p);

	return (0);
}
