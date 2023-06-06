#include "main.h"
/**
 * _strpbrk -  function locates the first occurrence in string s to accept.
 * @s: searched pointer to match with it.
 * @accept: search to be matched.
 *
 * Return: s or null.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *b = accept;

		while (*b != '\0')
		{
			if (*s == *b)
				return (s);
			b++;
		}
		s++;
	}
	return ('\0');
}
