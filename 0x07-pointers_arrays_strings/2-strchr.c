#include "main.h"
/**
 * _strchr - search for a character.
 * @s: pointer or searched value
 * @c: search for
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
