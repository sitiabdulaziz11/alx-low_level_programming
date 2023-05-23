#include "main.h"
/**
 * _abs - compute absolute value of number.
 * @a: receive number
 *
 * Return: a
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * (-1);
		return (a);
	}
	else
		return (a);
}

