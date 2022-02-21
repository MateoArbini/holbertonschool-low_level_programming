#include "main.h"
/**
 *print_chessboard - imprime un tablero de ajedrez
 *@a: string de 8 elementos
 *
 **/
void print_chessboard(char (*a)[8])
{
	int l;
	int t;

	for (l = 0; l < 8; l++)
	{
		for (t = 0; t < 8; t++)
		{
			if (t == 7)
			{
				_putchar(a[l][t]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[l][t]);
			}
		}
	}
}
