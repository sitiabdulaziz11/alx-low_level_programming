#include "main.h"
#include <stdlib.h>
/**
 * array_range - creat an array of integer.
 * @min: min value
 * @max: max value
 *
 * Return: pointer or null
 */
int *array_range(int min, int max)
{
	int l, lent;
	int *a_ptr;

	if (min > max)
		return (NULL);
	lent = max - min + 1;
	a_ptr = malloc(lent * sizeof(int));

	if (a_ptr == NULL)
		return (NULL);
	for (l = 0; l < lent; l++)
	{
		a_ptr[l] = min;
		min++;
	}
	return (a_ptr);
}
