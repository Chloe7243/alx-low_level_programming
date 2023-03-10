#include <stdio.h>

/**
 * main - prints number of args
 *
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: integer
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
