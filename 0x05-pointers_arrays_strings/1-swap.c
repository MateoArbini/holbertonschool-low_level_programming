#include "main.h"
/**
 *swap_int - cambia el valor de pointer a y b entre si
 *@*a: valor pointer a 
 *@*b: valor pointer b
 **/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

