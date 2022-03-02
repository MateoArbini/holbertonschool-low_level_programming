#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional grid previously created by your
 *alloc_grid function
 *@grid: previous function
 *@height: previous function
 *Return: grid
 **/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
}
