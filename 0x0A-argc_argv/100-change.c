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
	int cents, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	change = get_change(cents, 0);

	printf("%d\n", change);

	return (0);
}
/**
 * get_change - returns minimum no of coins to make change
 *
 * @cents: amount
 *
 * @change: number of coins
 *
 * Return: minimum number of coins to make change
 */
int get_change(int cents, int change)
{
	if (cents <= 0)
		return (change);
	int no_of_coins = 0;

	if (cents >= 25)
		call_get_change(cents, change, no_of_coins, 25);
	else if (cents >= 10)
		call_get_change(cents, change, no_of_coins, 10);
	else if (cents >= 5)
		call_get_change(cents, change, no_of_coins, 5);
	else if (cents >= 2)
		call_get_change(cents, change, no_of_coins, 2);
	else if (cents == 1)
		call_get_change(cents, change, no_of_coins, 1);
}

/**
 * call_get_change - calls the function get_change
 *
 * @cents: amount
 *
 * @change: number of coins
 *
 * @no_of_coins: number of coins
 *
 * @coin_value: value of coin
 *
 * Return: nothing
 */
void call_get_change(int cents, int change, int no_of_coins, int coin_value)
{
	no_of_coins += cents / coin_value;
	change += no_of_coins;
	cents -= no_of_coins * coin_value;

	get_change(cents, change);
}
