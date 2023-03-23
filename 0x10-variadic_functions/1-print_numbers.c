#include <stdio.h>
#include "stdarg.h"
#include "variadic_functions.h"

/**
 * print_numbers - sums all args
 *
 * @seperator: seperator
 * @n: ...
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		printf("%c ", (i != (n - 1)) ? *separator : '\n');
	}
	va_end(ap);
}

