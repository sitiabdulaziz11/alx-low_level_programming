#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned char *s;
	unsigned char *val;

	s = val;

	return ((int)(*s));
}
