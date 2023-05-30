#include "main.h"
/**
 * _strcpy - copies string source (src) to destination (des).
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int k;
	int b;

	k = 0;
	b = 0;
	while (src[b])
	{
		dest[k] = src[b];
		k++;
		b++;
	}
	return (dest);
}
