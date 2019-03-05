#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid
 * @grid: the 2 dimensional grid in question
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid || !height)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
