#include "main.h"
/**
* free_grid - frees a function
* @grid: pointer parameter
* @height: parameter
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
