#include <stdio.h>
#include "stdarg.h"
#include "variadic_functions.h"

/**
 * print_strings - sums all args
 *
 * @separator: separator
 * @n: ...
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}

