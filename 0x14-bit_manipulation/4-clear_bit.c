#include "main.h"
/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: a pointer to the unsigned long integer where the bit needs to be set.
 * @index:  an unsigned integer representing the index of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clr;

	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	clr = 1UL << index;
	*n &= ~clr;
	return (1);
}
