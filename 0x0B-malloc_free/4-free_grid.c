#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid created by alloc_grid function.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: Height of the grid.
 *
 * Return: No return value (void).
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check if grid is NULL or height is non-positive */
	if (grid == NULL || height <= 0)
		return;

	/* Free memory for each row and then for the grid itself */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
