#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

void hello(char *name)
{
	printf("Hello %s\n", name);
}

void say_hello(void (*ptr)(char *), char *name)
{
	ptr(name);
}

int main(void)
{
	int (*ptr)(int, int);
	void(*hello_ptr)(char *);
	void(*hello2)(void (*)(char *), char *);

	hello2 = say_hello;

	ptr = add;
	hello_ptr = hello;
	hello2(hello_ptr, "Mathew");
	hello_ptr("Mwaura");

	say_hello(hello, "Mark");

	printf("3 + 3 = %d\n", ptr(3, 39));
	return (0);
}
