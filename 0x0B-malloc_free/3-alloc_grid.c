#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes it to 0.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to the 2D array (grid), or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows (height) */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for the columns (width) and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory on failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
