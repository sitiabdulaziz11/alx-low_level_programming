#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int y;

	int res1 = 0;
	int res2 = 0;

	for (y = 0; y < size; y++)
	{
		res1 += a[y * size + y];
		res2 += a[(size - 1) * (y + 1)];
	}
	printf("%d, %d\n", res1, res2);
}
