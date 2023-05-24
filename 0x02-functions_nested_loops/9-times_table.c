#include "main.h"

/**
 * times_table - Times table.
 *
 *
 */
void times_table(void)
{
	int f;
	int h;
	int x;

	for (f = 0; f <= 9; f++)
	{
		for (x = 0; x <= 9; x++)
		{
			h = f * x;
			if (h > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(h / 10 + '0');
				_putchar(h % 10 + '0');
			}
			else
			{
				if (x > 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(h + '0');
			}
		}
		_putchar('\n');
	}
}
