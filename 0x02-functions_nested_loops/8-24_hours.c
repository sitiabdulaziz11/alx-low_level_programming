#include "main.h"

/**
 * jack_bauer - printing jack bauer minute 00:00 to 23:59.
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i;
	int o;
	int k;
	int y;

	for (i = '0'; i < '3'; i++)
	{
		for (o = 48; o <= 57; o++)
		{
			if (i == '2' && o > 51)
				break;
			{
				for (k = '0'; k < '6'; k++)
				{
					for (y = 48; y <= 57; y++)
					{
						_putchar(i);
						_putchar(o);
						_putchar(':');
						_putchar(k);
						_putchar(y);
						_putchar('\n');
					}
				}
			}
		}
	}
}
