#include "main.h"
/**
 * print_triangle - to print triangle.
 * @size: size of triangle
 *
 */
void print_triangle(int size)
{
	int j;
	int d;
	int f;

	if (size <= 0)
		_putchar('\n');
	for (j = 0; j <= size; j++)
	{
		for (d = size - j; d > 0; d--)
		{
			_putchar(' ');
		}
		for (f = 0; f < j; f++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}


