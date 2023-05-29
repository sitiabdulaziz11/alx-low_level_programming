#include "main.h"
/**
 * _puts - print string
 * @str: recevied string.
 */
void _puts(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
