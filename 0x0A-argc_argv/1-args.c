#include <stdio.h>

/**
 * main - prints number of args
 *
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: integer
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", --argc);

	return (0);
}
