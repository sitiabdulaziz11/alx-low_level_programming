#include "main.h"
/**
 * more_numbers - print 0 to 14.
 *
 */
void more_numbers(void)
{
	int m;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
	{
		if (m > 9)
			_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
	}
	_putchar('\n');
	}
}

