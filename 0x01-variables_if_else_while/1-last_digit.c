#include <stdlib.h>
#include "stdio.h"
#include <time.h>
/**
 *	* main - ejecuta un numero random a una variable e imprime el ultimo digito
 *	* Return: always
 *	**/

int main(void)
{
	int n;
	int last_digit;

	last_digit = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	return (0);
}
