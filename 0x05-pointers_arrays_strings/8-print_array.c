#include "main.h"
#include <stdio.h>
/**
 * print_array - print array.
 * @a: index
 * @n: value
 */
void print_array(int *a, int n)
{
	int k;

	printf("%d", a[0]);
	for (k = 1; k < n; k++)
	{
		printf(", %d", a[k]);
	}
	printf("\n");
}
