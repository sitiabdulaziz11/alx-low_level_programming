#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all.
 * @format: pointer
 *
 */
void print_all(const char * const format, ...)
{
	va_list par;
	char *p;
	int f = 0;

	va_start(par, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[f])
	{
		switch (format[f])
		{
			case 'c':
				printf("%c", (char)va_arg(par, int));
				break;
			case 'i':
				printf("%d", va_arg(par, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(par, double));
				break;
			case 's':
				p = va_arg(par, char *);
				if (p != NULL)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[f] == 'c' || format[f] == 'i' || format[f] == 'f' ||
				format[f] == 's') && format[(f + 1)] != '\0')
			printf(", ");
		f++;
	}
	va_end(par);
	printf("\n");
}

