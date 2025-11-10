#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The number of columns of the array.
 * @height: The number of lines of the array.
 *
 * Return: A pointer to the 2 dimensional array, return NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i;

	grid = calloc(width, (width * sizeof(int)));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		grid[i] = calloc(height, (height * sizeof(int)));
	if (*grid == NULL)
		return (NULL);
	return (grid);
}
