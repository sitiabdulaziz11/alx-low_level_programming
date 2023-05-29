#include "main.h"
/**
 * rev_string - reverse string.
 * @s: value
 */
void rev_string(char *s)
{
	int k;
	int f;
	int e;
	int rev;

	for (f = 0; s[f] != '\0';)
	{
		f++;
	}
	for (e = 0, k = f - 1; k > e ; e++, k--)
	{
		rev = s[e];
		s[e] = s[k];
		s[k] = rev;
	}
}

