#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: ...
 * @argv: ...
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int val1, val2, result;
	char op = *argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);

	if ((op == '/' || op == '%') && val2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(val1, val2);

	printf("%d\n", result);

	return (0);
}
