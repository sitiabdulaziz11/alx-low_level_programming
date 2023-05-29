#include "main.h"
/**
 *  _strlen - return the length of string.
 * @s: coming string.
 *
 * Return: len
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

