#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: index where value is located or -1 if no value.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, end, start;
	int mid_indx;

	if (array == NULL)
		return (-1);

	end = size - 1;
	start = 0;

	while (start < end)
	{
		mid_indx = (end + start) / 2;

		printf("Searching in array: ");
		for (i = 0; i < end ; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid_indx] > value)
			end = mid_indx - 1;
		else if (array[mid_indx] < value)
			start = mid_indx + 1;
		else
			return (mid_indx);
	}
	return (-1);
}
