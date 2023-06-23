#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything.
 * @format: list of type of argument.
 *
 */
void print_all(const char * const format, ...)
{
	va_list form;
	int i, r = 0;
	char c;
	float f;
	char *s;

	va_start(form, format);
	while (format[r] != '\0')
	{
		if (format[r] == 'i')
		{
			i = va_arg(form, int);
			printf("%d, ", i);
		}
		else if (format[r] == 'c')
		{
			c = (char)va_arg(form, int);
			printf("%c, ", c);
		}
		else if (format[r] == 'f')
		{
			f = va_arg(form, double);
			printf("%f, ", f);
		}
		else if (format[r] == 's')
		{
			s = va_arg(form, char *);
			while (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
		}
		r++;
	}
	va_end(form);
	printf("\n");
}
