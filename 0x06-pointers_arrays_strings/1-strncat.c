#include "main.h"
/**
 * _strncat - concatenate two string that use n bytes from src.
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int q;

	q = 0;
	while (dest[q] != '\0')
		q++;
	k = 0;
	while (n > 0 && src[k] != '\0')
	{
		dest[q] = src[k];
		q++;
		k++;
		n--;
	}
	dest[q] = 0;
	return (dest);
}


