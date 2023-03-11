#include <stdio.h>
void before_main(void) __attribute__((constructor));
void after_main(void) __attribute__((destructor));

void before_main(void)
{
	printf("before main\n");
}

void after_main(void)
{
	printf("after main\n");
}

int main(void)
{
	printf("main\n");
	return (0);
}
