#include <stdio.h>

/**
 * main - Printing all possible commbination ot two digits
 *
 * Return: 0
 */
int main(void)
{
	int s;
	int g;

	for (s = '0'; s < '9'; s++)
	{
		g = s + 1;
		while (g <= '9')
		{
			putchar(s);
			putchar(g);
			if (s != '8' || g != '9')
			{
				putchar(',');
				putchar(' ');

			}
			g++;

		}
	}
	putchar('\n');
	return (0);
}


