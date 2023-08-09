#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - a function that returns address of the 2 dimensional array
 *@width: width of the grid
 *@height: height of the grid
 *Return: 0 (Success)
 *Otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptrgrid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptrgrid = malloc(sizeof(int *) * height);
	if (ptrgrid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptrgrid[i] = malloc(sizeof(int) * width);
		if (ptrgrid[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptrgrid[i][j] = 0;
	}
	return (ptrgrid);
}



