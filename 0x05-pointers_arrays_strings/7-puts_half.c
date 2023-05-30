#include "main.h"
/**
 * puts_half - print half of string.
 * @str: value
 */
void puts_half(char *str)
{
	int half_lent;
	int lent;

	lent = 0;
	while (str[lent] != '\0')
	{
		lent++;
	}

	if (lent % 2 == 0)
	{
		half_lent = lent / 2;
	}
	else
	{
		half_lent = (lent + 1) / 2;
	}
	while (half_lent < lent)
	{
		_putchar(str[half_lent]);
		half_lent++;
	}
	_putchar('\n');
}


