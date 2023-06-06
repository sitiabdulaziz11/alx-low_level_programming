#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: pinter
 */
void print_chessboard(char (*a)[8])
{
	int d, g;

	for (d = 0; d < 8; d++)
	{
		for (g = 0; g < 8; g++)
		{
			_putchar(a[d][g]);
		}
		_putchar('\n');
	}
}
