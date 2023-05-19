#include <stdio.h>

/**
 * main - printing decimal numbers
 *
 * Return: 0
 */
int main(void)
{
	int j;

	j = '0';
	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
