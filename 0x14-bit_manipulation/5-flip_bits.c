#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip.
 * @n: first number.
 *
 * @m: second number.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count = 0;

	xor = n ^ m;
	count = 0;
	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
