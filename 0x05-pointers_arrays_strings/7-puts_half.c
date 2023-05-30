#include "main.h"
/**
 * puts_half - print half of string.
 * @str: value
 */
void puts_half(char *str)
{
	int half_lent;
	int lent;
	int j;

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
		half_lent = (lent - 1) / 2;
	}
	j = half_lent;
	while (j <= lent)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}


