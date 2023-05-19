#include <stdio.h>

/**
 * main - printing lowercase letter in revers order
 *
 * Return: 0
 */

int main(void)
{
	int q;

	for (q = 122; q >= 97; q--)
		putchar(q);
	putchar('\n');
	return (0);
}
