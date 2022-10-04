#include "main.h"


/**
 * free_grid - function to free grid
 * @grid: grid to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

