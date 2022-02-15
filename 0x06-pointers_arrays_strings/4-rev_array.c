#include "main.h"
/**
 *reverse_array - print a string in reverse
 *@a: string
 *@n: large of the string
 **/
void reverse_array(int *a, int n)
{
	int i = 0;
	int AUX;

	for (i = 0; i <= n / 2; i++)
	{
		AUX = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = AUX;
	}
}
