#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int y, res1, res2;

	for (y = 0; y < size; y++)
	{
		res1 = 0;
		res2 = 0;
		res1 = res1 + a[(size + 1) * b];
		res2 = res2 + a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", res1, res2);
}
