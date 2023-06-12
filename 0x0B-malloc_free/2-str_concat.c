#include "main.h"
#include <stdlib.h>
/**
 * str_concat - To concatnet two string.
 * @s1: destination.
 * @s2: source
 *
 * Return: pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	int l, k;
	int lent1, lent2;
	char *new_a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lent1 = 0;
	while (s1[lent1] != '\0')
	{
		lent1++;
	}

	lent2 = 0;
	while (s2[lent2] != '\0')
	{
		lent2++;
	}

	new_a = (char *)malloc(sizeof(char) * (lent1 + lent2 + 1));
	if (new_a == NULL)
		return (NULL);

	for (l = 0; l < lent1; l++)
	{
		new_a[l] = s1[l];
	}

	for (k = 0; k < lent2; k++)
	{
		new_a[lent1 + k] = s2[k];
	}
	new_a[lent1 + lent2] = '\0';
	return (new_a);
}
