#include "main.h"
/**
 *
 *
 **/
int prime(int y, int x)
{
	if (y % x == 0)
	{
		return (0);
	}
	if (x * x > y)
	{
		return (1);
	}
	return (prime(y, x + 1));
}
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}
