#include <stdio.h>

/**
 * main - print number with comma and space
 *
 * Return: 0
 */
int main(void)
{
	int h;

	h = '0';
	while (h <= '9')
	{
		putchar(h);
		if (h != '9')
		{
		putchar(',');
		putchar(' ');
		}
		h++;
	}
	putchar('\n');
	return (0);
}
