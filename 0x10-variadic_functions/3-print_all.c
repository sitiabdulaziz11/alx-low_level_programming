#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print anything.
 * @format: list of type of argument.
 */
void print_all(const char * const format, ...)
{
	va_list par;
	int i = 0, f, pu, char *str;

	va_start(par, format);
	char arr[] = {'c', 'i', 'f', 's'};
	while (format[i] && format != NULL )
	{
		f = 0;
		while (arr[f] != format[i] && f < 4)
			f++;
		if (arr[f] == format[i])
		{
			switch (format[i])
			{
				case 'c':
					{
						pu = va_arg(par, int);
						printf("%c, ", pu);
						break;
					}
				case 'i':
					{
						pu = va_arg(par, int);
						printf("%d, ", pu);
						break;
					}
				case 'f':
					{
						pu = va_arg(par, double);
						printf("%f, ", pu);
						break;
					}
				case 's':
					{
						str = va_arg(par, char*);
						if (str == NULL)
							    printf("(nil)");
						printf("%s", str);
						break;
					}
			}
		}  
		i++;           
	}
	va_end(par);
	printf("\n");
}
