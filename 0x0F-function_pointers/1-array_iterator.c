#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter.
 * @array: array of element
 * @size: size of array
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
