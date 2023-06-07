#include "main.h"
/**
 * _strchr - search for a character.
 * @s: pointer or searched value
 * @c: search for
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	int w;

	while (s[w] != '\0')
	{
		if (s[w] == c)
			return (&s[w]);
		w++;
	}
	return ('\0');
}
