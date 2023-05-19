#include <stdio.h>

/**
 * main - To print letters in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	b = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
