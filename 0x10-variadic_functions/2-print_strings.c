#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings.
 * @separator: separators between numbers.
 * @n: size or number of integer.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int x;
	const char *cptr;

	va_start(num, n);

	for (x = 0; x < n; x++)
	{
		cptr = va_arg(num, const char *);

		if (cptr == NULL)
			printf("(nil)");
		else
			printf("%s", cptr);

		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
