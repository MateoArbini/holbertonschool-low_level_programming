#include "main.h"

/**
 *_isupper - returns 1 if c is upper
 *@c: random letter
 *Return: 1 or 0 depending
 *
 **/
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
