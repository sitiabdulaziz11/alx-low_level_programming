#include "main.h"
/**
 * _memset - function that fills the first n bytes of memory by b.
 * @s: point constant byte b.
 * @b: fill with b
 * @n: n bytes of memory
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	d = 0;
	while (d < n)
	{
		s[d] = b;
		d++;
	}
	return (s);
}
