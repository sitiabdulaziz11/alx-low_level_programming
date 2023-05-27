#include "main.h"
/**
 * print_diagonal - print diagonal lines
 * @n: value
 *
 */
void print_diagonal(int n)
{
	int o;

	for (o = 0; o < n; o++)
	{
		if (n > 0)
			_putchar('\\');
		_putchar('\n');
	}
}
