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
	int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == n--)
			seperator = "\n";

		printf("%d%s", va_arg(ap, int), seperator);
	}
	va_end(ap);
}

