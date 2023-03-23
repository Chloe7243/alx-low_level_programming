#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a: integer1
 * @b: integer2
 *
 * Return: integer value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 *
 * @a: integer1
 * @b: integer2
 *
 * Return: integer value
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: integer1
 * @b: integer2
 *
 * Return: integer value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 *
 * @a: integer1
 * @b: integer2
 *
 * Return: integer value
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets remainder of two integers
 *
 * @a: integer1
 * @b: integer2
 *
 * Return: integer value
 */

int op_mod(int a, int b)
{
	return (a % b);
}
