#include "main.h"
/**
 * _strstr - search for substring
 * @haystack: main string
 * @needle: sub string
 *
 * Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	int h;

	h = 0;
	while (haystack[h] != '\0')
	{
		int k;

		k = 0;
		while (needle[k] != '\0')
		{
			if (haystack[h + k] != needle[k])
				break;
			k++;
		}
		if (needle[k] == '\0')
			return (haystack + h);
		h++;
	}
	return ('\0');
}

