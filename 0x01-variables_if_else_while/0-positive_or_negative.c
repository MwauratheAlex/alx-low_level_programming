#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* 
 * main - Entry point
 *
 * Checks if a randomly generated number is negative or positive
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n >= 0)
		printf("%d is positive\n");
	else
		printf("%d is negative\n");

	return (0);
}
