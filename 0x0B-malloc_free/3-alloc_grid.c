#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional array.
 * @width: rows of array.
 * @height: columns of array.
 *
 * Return: pointer or null.
 */
int **alloc_grid(int width, int height)
{
	int **matri;
	int k, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	matri = (int **)malloc(height * sizeof(int *));
	if (matri == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		matri[k] = (int *)malloc(width * sizeof(int));

		if (matri[k] == NULL)
		{
			for (b = 0; b < k; b++)
			{
				free(matri[b]);
			}
			free(matri);
			return (NULL);
		}
	for (b = 0; b < width; b++)
		matri[k][b] = 0;
	}
	return (matri);
}
