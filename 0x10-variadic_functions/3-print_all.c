#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print anything.
 * @format: list of type of argument.
 * @par: ...
 */
void _switch(char format, va_list par);
void print_all(const char * const format, ...)
{
	va_list par;
	int i = 0, f;
	char *dif;
	char form;
	char arr[] = {'c', 'i', 'f', 's'};

	dif = "";
	va_start(par, format);
	f = 0;
	while (arr[f] != format[i])
	{
		f++;
	}
	i = 0;
	if (format[i] == arr[f])
	{
		form = format[i];
		while (form && format != NULL && i < 4)
		{
			_switch(form, par);
			printf("%s", dif);
			dif = ", ";
			form = format[++i];
		}
	}
	va_end(par);
	printf("\n");
}
/**
 * _switch - switch case.
 * @format: ...
 * @par: ...
 */
void _switch(char format, va_list par)
{
	int pu;
	char *str;
	float pp;

	switch (format)
	{
		case 'c':
		{
			pu = va_arg(par, int);
			printf("%c", pu);
			break;
		}
		case 'i':
		{
			pu = va_arg(par, int);
			printf("%d", pu);
			break;
		}
		case 'f':
		{
			pp = va_arg(par, double);
			printf("%f", pp);
			break;
		}
		case 's':
		{
			str = va_arg(par, char*);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
	}
}
