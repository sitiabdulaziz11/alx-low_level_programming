#include "function_pointers.h"
/**
 * int_index - search for integer and return index.
 * @array: array of integer.
 * @size: size of array
 * @cmp: function pointer that compare nth value.
 *
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (v = 0; v < size; v++)
		{
			if (cmp(array[v]) != 0)
				return (v);
		}
	}
	return (-1);
}
