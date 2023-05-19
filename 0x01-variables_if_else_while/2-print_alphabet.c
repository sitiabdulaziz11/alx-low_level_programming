#include <stdio.h>

/**
 * main - To print alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int k;

	for (k = 97; k <= 122; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
