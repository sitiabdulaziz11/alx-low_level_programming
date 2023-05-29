#include "main.h"
/**
 * print_rev - print string in reverse order.
 * @s: value of string
 *
 */
void print_rev(char *s)
{
	int m;
	int j;

	for (m = 0; s[m] != '\0';)
	{
		m++;
	}
	for (j = m - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
