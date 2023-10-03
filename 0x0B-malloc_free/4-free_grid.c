#include <stdlib.h>
#include "main.h"

/**
 * free_grid - that frees a 2 dimensional
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}

	free(grid);
}
