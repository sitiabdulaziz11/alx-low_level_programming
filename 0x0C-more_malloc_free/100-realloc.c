#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate memory block using malloc.
 * @ptr: old or previous pointer.
 * @old_size: old size.
 * @new_size: new size.
 *
 * Return: pointer or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int lent, m;
	char *n_ptr, *o_ptr;
	void *n_vptr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	n_vptr = malloc(new_size);

	if (old_size < new_size)
		lent = old_size;
	else
		lent = new_size;
	o_ptr = (char *)ptr;
	n_ptr = (char *)n_vptr;

	for (m = 0; m < lent; m++)
	{
		n_ptr[m] = o_ptr[m];
	}
	free(ptr);
	return (n_vptr);
}
