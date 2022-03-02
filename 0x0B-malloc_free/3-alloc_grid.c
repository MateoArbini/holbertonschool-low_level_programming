#include "main.h"
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: ancho del array
 *@height: alto del array
 *Return: grid
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0) /*valida input*/
		return (NULL);

	grid = malloc(sizeof(int *) * height); /*asigna la memoria para fila*/

	if (grid == NULL) /* asigna la memoria */
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL) /*asigna memoria*/
		{
			for (i = 0; i < height; i++)
				free(grid[i]); /*aca libera i del grid*/
			free(grid);/*aca elimina el grid*/
			return (NULL);
		}
		for (j = 0; j < width; j++) /*setea los valores del array a 0*/
			grid[i][j] = 0;
	}
	return (grid);
}
