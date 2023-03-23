#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int val1, val2, result, i = 0;

	if (argc != 4)
	{
		printf("Error\n");
		return(0);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);

	result = get_op_func(argv[2])(val1, val2);

	printf("%d\n", result);

	return (0);
}


