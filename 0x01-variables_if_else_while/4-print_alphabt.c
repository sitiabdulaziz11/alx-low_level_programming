#include <stdio.h>

/**
 * main - escape e and q
 *
 * Return: 0
 */
int main(void)
{
	int t;

	for (t = 97; t <= 122; t++)
	{
		if (t == 101 || t == 113)
			continue;
		putchar(t);
	}
	putchar('\n');
	return (0);
}
