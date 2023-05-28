#include "main.h"
/**
 * print_square - print square.
 * @size: size of square
 *
 */
void print_square(int size)
{
	int l;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (l = 0; l < size; l++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

