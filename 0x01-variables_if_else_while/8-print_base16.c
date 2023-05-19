#include <stdio.h>

/**
 * main - print all base 16
 *
 * Return: 0
 */

int main(void)
{
	int r;
	int s;

	for (r = '0'; r <= '9'; r++)
		putchar(r);
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
