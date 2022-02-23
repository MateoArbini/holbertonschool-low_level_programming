#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: number base
 *@y: number power
 *Return: if y == 0; 1, if y < -1, -1 and otherwise, the function value
 **/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
