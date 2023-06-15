#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory with malloc.
 * @b: size
 *
 * Return: pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *ptrs = malloc(b);

	if (ptrs == NULL)
	{
		exit(98);
	}
	return (ptrs);
}

