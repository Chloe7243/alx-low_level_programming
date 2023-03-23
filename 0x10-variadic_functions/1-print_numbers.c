#include <stdio.h>
#include "stdarg.h"
#include "variadic_functions.h"

/**
 * print_numbers - sums all args
 *
 * @separator: separator
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
		(separator && i != n - 1) ? printf("%c ", *separator) : putchar('\n');
	}
	va_end(ap);
}

