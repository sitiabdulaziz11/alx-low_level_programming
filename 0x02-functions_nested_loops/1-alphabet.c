#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Display lowercase alphabet.
 *
 */
void print_alphabet(void)
{
	int k;

	for (k = 97; k <= 122; k++)
		_putchar(k);
	_putchar('\n');
}
