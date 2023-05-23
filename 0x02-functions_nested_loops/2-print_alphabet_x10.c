#include "main.h"

/**
 * print_alphabet_x10 - To print lowercase alphabet 10 times.
 *
 */
void print_alphabet_x10(void)
{
	int t;
	int j;

	t = 0;
	while (t <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		t++;
		_putchar('\n');
	}
}
