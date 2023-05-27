#include "main.h"

/**
 * _isupper - check for upper letter
 * @c: received num
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
