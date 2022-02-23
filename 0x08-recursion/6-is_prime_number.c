#include "main.h"
/**
 *prime - find prime numbers
 *@y: number
 *@x: number
 *Return: 1 if number is prime, 0 otherwise
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
/**
 *is_prime_number - if number is prime, return smth
 *@n: number
 *Return: 1 if it is prime, 0 otherwise
 **/
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
