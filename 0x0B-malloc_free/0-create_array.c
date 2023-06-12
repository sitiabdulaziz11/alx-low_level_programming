#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - a function that creates an array of char and initialize it.
 * @size: size of char.
 * @c: specific char
 * Return: null or pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int t;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (t = 0; t < size; t++)
	{
		arr[t] = c;
	}
	return (arr);
}
