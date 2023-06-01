#include "main.h"
/**
 * _strcat - To concatenate two string.
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n;
	int k;

	for (k = 0; dest[k] != 0;)
		k++;
	i = 0;
	n = k;
	while (src[i])
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
