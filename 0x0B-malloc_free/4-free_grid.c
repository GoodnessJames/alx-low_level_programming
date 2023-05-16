#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by the alloc_grid
 *	       function.
 * @grid: Pointer to a pointer of integers of a 2D array
 * @height: Height of the grid
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
