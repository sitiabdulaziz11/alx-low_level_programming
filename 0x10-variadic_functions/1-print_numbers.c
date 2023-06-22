#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers.
 * @separator: separators between numbers.
 * @n: size or number of integer.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int t;

	if (separator != NULL)
	{
		va_start(num, n);
	for (t = 0; t < n; t++)
	{
		printf("%d%s ", va_arg(num, unsigned int), separator);
	}
	}
	va_end(num);
	printf("\n");
}
