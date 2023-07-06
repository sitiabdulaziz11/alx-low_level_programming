#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int.
 * @b: is pointer pointing to a string of 0 and 1 chars.
 *
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int w;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		w = *b - '0';

		total = (total << 1) | w;
		b++;
	}
	return total;
}
