#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - add args
 *
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: integer
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}	

	while (i < argc)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
