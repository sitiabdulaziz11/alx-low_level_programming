#include "main.h"
/**
 * leet - encode strings
 * @s: value
 *
 * Return: s
 */
char *leet(char *s)
{
	int k;
	int l;
	char v1[] = "aAeEoOtTlL";
	char v2[] = "4433007711";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; l < 10; l++)
		{
			if (s[k] == v1[l])
				s[k] = v2[l];
		}
	}
	return (s);
}
