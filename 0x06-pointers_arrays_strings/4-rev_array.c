#include "main.h"
/**
 * reverse_array - to revers array contents.
 * @a: array value
 * @n: index
 */
void reverse_array(int *a, int n)
{
	int b;
	int v;
	int c;

	c = n - 1;
	b = 0;
	while (b < c)
	{
		v = a[b];
		a[b] = a[c];
		a[c] = v;
		b++;
		c--;
	}
}
