#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all of functions parametr.
 * @n: number of parameter
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int m, add = 0;
	va_list pars;

	if (n == 0)
		return (0);

	va_start(pars, n);

	for (m = 0; m < n; m++)
	{
		add += va_arg(pars, unsigned int);
	}
	va_end(pars);
	return (add);

}
