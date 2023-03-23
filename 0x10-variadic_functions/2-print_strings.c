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
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		printf("%s", s == NULL ? "(nil)" : s);

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}

