#include "main.h"
/**
 * puts_half - print half of string.
 * @str: value
 */
void puts_half(char *str)
{
	int n;
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;

	j = n;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}


