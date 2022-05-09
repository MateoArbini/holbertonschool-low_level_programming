#include <ctype.h>
/**
 * _islower - function that checks character
 * @c: letter lowercase
 * Return: 1 if c is lowercase, otherwise 0
 **/
int _islower(int c)
{
if (islower(c))
	return (1);
else
	return (0);
}
