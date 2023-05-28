#include "main.h"
/**
 * print_diagonal - print diagonal lines
 * @n: value
 *
 */
void print_diagonal(int n)
{
	int t;
	int o;

	if (n <= 0)
		_putchar('\n');
	for (t = 0; t < n; t++)
	{
		for (o = 0; o < t; o++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
