#include "main.h"
/**
 * puts2 - print character of string.
 * @str: received value
 */
void puts2(char *str)
{
	int r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] % 2 == 0)
		{
			_putchar(str[r]);
		}
		r++;
	}
	_putchar('\n');
}
