#include <stdio.h>
#include "stdarg.h"
#include "variadic_functions.h"

/**
 * print_all - prints all args
 *
 * @format: ...
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, start = 0;
	char *s;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				printf("%f", va_arg(ap, double));
				break;
			case's':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				s = va_arg(ap, char*);
				printf("%s", s == NULL ? "(nil)" : s);
				break;
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}

