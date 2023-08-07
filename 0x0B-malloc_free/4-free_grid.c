#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a 2d grid
 * @grid: the grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height == 0)
		return;
	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
