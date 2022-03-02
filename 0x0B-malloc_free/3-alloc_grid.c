#include "main.h"
/**
 *width - ancho del array
 *height - alto del array
 *@Return: grid
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

/**
 * Hasta aca, lo que hacemos es determinar si las medidas que te pasan a traves
 * de las variables son menores a 0, en ese caso el return que te debe de dar
 * es NULL, luego, lo que se hace es utilizar el comando malloc para el grid,
 * en donde el tamaño del grid va a ser igual a el sizeof de int * por el
 * height. Y luego se establece que si el grid es NULL, que retorne NULL.
 **/
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
/**
 * En el primer for, lo que se hace asignar el espacio en memoria por columnas
 * para cada fila. Luego con el grid, asigna el espacio en memoria para el
 * width con malloc. Luego con el for, establece que si i es menor al height,
 * aplique la funcoin free. Con ella, lo que se hace es liberar el contenido
 * [i] del grid, dejando al mismo vacio. Luego, utiliza el free para borrar
 * el grid en si mismo y que retorne NULL. Por utlimo, para el ultimo for, se
 * establece que los valores del array, arranquen desde 0, igualando i y j
 * igual a 0. Por ultimo, retorna grid.
 * **/
}
