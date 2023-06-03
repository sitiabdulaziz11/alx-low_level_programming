#include "main.h"
/**
 * string_toupper - change letter from lowercase to uppercase
 * @st: value
 *
 * Return: st
 */
char *string_toupper(char *st)
{
	int k;

	k = 0;
	while (st[k] != '\0')
	{
		if (st[k] >= 'a' && st[k] <= 'z')
		{
			st[k] = st[k] - 32;
		}
		k++;
	}
	return (st);
}

