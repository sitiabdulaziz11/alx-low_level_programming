#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space, contains copy of string.
 * @str: pointer.
 *
 * Return: null
 */
char *_strdup(char *str)
{
	int v;
	int lent;
	char *new_a;

	if (str == NULL)
		return (NULL);

	lent = 0;
	while (str[lent] != '\0')
	{
		lent++;
	}

	new_a = (char *)malloc((lent + 1) * sizeof(char));
	if (new_a == NULL)
		return (NULL);
	v = 0;
	while (str[v])
	{
		new_a[v] = str[v];
		v++;
	}
	return (new_a);
}
