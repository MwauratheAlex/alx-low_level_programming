#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  prints the minimum number of coins to make change for an amount
 *
 * @argc: arguement count
 *
 * @argv: arguement vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, no_of_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	no_of_coins += get_no_of_coins(&cents, 25);
	no_of_coins += get_no_of_coins(&cents, 10);
	no_of_coins += get_no_of_coins(&cents, 5);
	no_of_coins += get_no_of_coins(&cents, 2);
	no_of_coins += cents;

	printf("%d\n", no_of_coins);

	return (0);
}

/**
 * get_no_of_coins - calculates number of coins required for change
 *
 * @cents: full amount
 *
 * @coin: coin value available for change
 *
 * Return: number of coins
 */
int get_no_of_coins(int *cents, int coin)
{
	int no_of_coins = 0;

	no_of_coins += *cents / coin;
	*cents = *cents - (no_of_coins * coin);

	return (no_of_coins);
}
