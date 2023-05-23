#include "main.h"

/**
 * _isalpha - Function that checks alphabetic character.
 * @c: comming character
 *
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c > 90 && c < 97)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}
