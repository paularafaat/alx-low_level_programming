#include "main.h"
/**
 * free_grid - function that frees 2 dimensional grid
 * @grid: pointer
 * @height: integer
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int s = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);

}
