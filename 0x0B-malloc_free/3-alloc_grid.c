#include "main.h"

/**
 * alloc_grid - to print 2 dimensional array
 * @width: width of the array as the rows
 * @height:height of the array as the column
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width < 1)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int *));
	}
	return (grid);
}

/**
 * freeGrid - function to free grid
 * @grid: pointer to be freed
 * @width: width of array
 * @height: height of array
 * Return: Nothing
 */

void freeGrid(int **grid, int width __attribute__((unused)), int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}












