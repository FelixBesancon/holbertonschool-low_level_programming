#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid previously created by
 * alloc_grid function.
 * @grid: The pointer to the 2 dimensional grid to free.
 * @height: The height of the grid.
 *
 * Return
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height >= 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
