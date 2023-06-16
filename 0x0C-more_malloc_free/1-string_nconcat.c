#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenate two string.
 * @s1: destination
 * @s2: source
 * @n: size
 *
 * Return: null or pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *n_ptr;
	unsigned int r, c;
	int h, d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	h = 0;
	while (s1[h] != '\0')
	{
		h++;
	}
	r = 0;
	while (s2[r] != '\0')
	{
		r++;
	}
	if (n >= r)
	{
		n = r;
	}
	n_ptr = malloc((h + n + 1) * sizeof(char));
	if (n_ptr == NULL)
		return (NULL);
	for (d = 0; d < h; d++)
	{
		n_ptr[d] = s1[d];
	}
	for (c = 0; c < n; c++)
	{
		n_ptr[d + c] = s2[c];
	}
	n_ptr[d + c] = '\0';
	return (n_ptr);
}
