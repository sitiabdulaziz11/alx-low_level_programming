#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2D grid or array that creat previousiy.
 * @grid: 2D array.
 * @height: columns of array.
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
