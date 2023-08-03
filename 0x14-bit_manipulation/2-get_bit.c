#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number.
 * @index: index.
 *
 * Return:  the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int sum, m;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	 m = 1UL << index;
	sum = n & m;

	return (sum != 0);
}
