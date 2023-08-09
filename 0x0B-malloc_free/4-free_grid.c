#include "main.h"
#include <stdlib.h>

/**
 *free_grid - function to free space created for the grid
 *@grid: Address of the two dimensional grid
 *@height: Height of the grid
 *Return: 0 (Success)
 *Otherwise NULL
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
