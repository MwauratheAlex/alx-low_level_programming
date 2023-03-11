#include <stdio.h>

/**
 * constructor - Adding the attribute: constructor
 * will make out function to be executed before main.
 * This can be used for setup.
 *
 * if we added the attribute: destructor,
 * the function will be executed after main.
 * This can be used for cleanup
 */
void constructor(void) __attribute__((constructor));

/**
 * constructor - prints a string before the main function
 *
 * Return: nothing
 */
void constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
