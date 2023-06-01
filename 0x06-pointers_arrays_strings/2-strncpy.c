#include "main.h"
/**
 * _strncpy - copy strings
 * @dest: destination
 * @src: source
 * @n: number of char
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h;
	int r;

	h = 0;
	r = 0;
	while (n > 0 && src[h] != 0)
	{
		dest[r] = src[h];
		r++;
		h++;
		n--;
	}
	dest[r] = 0; /*null character*/
	return (dest);
}

