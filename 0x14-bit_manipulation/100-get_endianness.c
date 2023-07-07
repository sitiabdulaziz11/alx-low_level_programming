#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned char *s;
	unsigned int val = 1;
	int a;

	s = (unsigned char *)&val;
	a = (int)*s;
	if (a == 0)
		return (0);
	else
		return (1);
}
