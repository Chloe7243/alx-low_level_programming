#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int getcoins(int change);

/**
 * main - gets number of coins
 *
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = getcoins(atoi(argv[1]));
	printf("%d\n", coins);

	return (0);
}

/**
 * getcoins - gets number of coins
 *
 * @change: change amount
 *
 * Return: integer
*/

int getcoins(int change)
{
	int div;

	if (change >= 25)
	{
		div = 25;
	}
	else if (change >= 10 && change < 25)
	{
		div = 10;
	}
	else if (change >= 5 && change < 10)
	{
		div = 5;
	}
	else if (change >= 2 && change < 5)
	{
		div = 2;
	}
	while (change > 1)
	{
		return (change / div + getcoins(change % div));
	}
	return (0);
}
