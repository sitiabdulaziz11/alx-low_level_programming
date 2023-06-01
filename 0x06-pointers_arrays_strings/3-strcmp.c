#include "main.h"
/**
 * _strcmp - to compare two strings.
 * @s1: source
 * @s2: destination
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int t;

	t = 0;
	while (s1[t] == s2[t])
	{
		if (s1[t] == '\0' && s2[t] == '\0')
			break;
		t++;
	}
	return (s1[t] - s2[t]);
}
