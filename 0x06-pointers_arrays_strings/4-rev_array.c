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

	for (; i < n / 2; i++)
	{
		AUX = a[i];
		a[n - i - 1] = a[i];
		a[n - i - 1] = AUX;
	}
}
