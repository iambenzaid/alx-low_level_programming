#include <stdlib.h>
/**
* free_grid - Function that frees a 2 dimensional grid
* previously created by the alloc_grid function
* @grid: Integer
* @height: Integer
* Return: Nothing
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}

}
