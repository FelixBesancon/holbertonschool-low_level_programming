#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}   
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(9, 10);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 9, 10);
	printf("\n");
	grid[0][0] = 5;
	grid[1][1] = 50;
	grid[2][1] = 75;
	grid[2][3] = 750;
	grid[6][6] = 5000;
	print_grid(grid, 9, 10);
	return (0);
}

