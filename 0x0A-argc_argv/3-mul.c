#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two args
 *
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: integer
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
