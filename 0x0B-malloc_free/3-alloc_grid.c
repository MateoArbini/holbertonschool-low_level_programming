#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: ancho del array
 *@height: alto del array
 *Return: grid
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int a = 0;
	int j = 0;

	if (width <= 0 || height <= 0) /*valida input*/
		return (NULL);

	grid = malloc(sizeof(int *) * height); /*asigna la memoria para fila*/

	if (grid == NULL) /* asigna la memoria */
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL) /*asigna memoria*/
		{
			for (a = 0; a < height; a++)
				free(grid[a]); /*aca libera a del grid*/
			free(grid);/*aca elimina el grid*/
			return (NULL);
		}
		for (j = 0; j < width; j++) /*setea los valores del array a 0*/
			grid[a][j] = 0;
	}
	return (grid);
}
