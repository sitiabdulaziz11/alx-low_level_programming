#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memory for an array.
 * @nmemb: membeers or element.
 * @size: size
 * Return: pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new_ptr;
	unsigned char *nptr, t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_ptr = malloc(size * nmemb);
	if (new_ptr == NULL)
		return (NULL);

	nptr = (unsigned char *)new_ptr;
	for (t = 0; t < (size * nmemb); t++)
	{
		nptr[t] = 0;
	}
	return (nptr);
}
