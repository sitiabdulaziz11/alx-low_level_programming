#include "main.h"
/**
 * _memcpy - function that copies n bytes from memory area.
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;
	unsigned int j;

	h = 0;
	j = 0;
	while (h < n)
	{
		dest[j] = src[h];
		j++;
		h++;
	}
	return (dest);
}
