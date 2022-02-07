#include <ctype.h>
/**
 *_isalpha - checks for upper and lower
 *@c: upper and lower letters
 *Return: 1 for upper and lower and 0 otherwise
 **/

int _isalpha(int c);
{
	if (isupper(c) || islower(c))
		return (1);
	else
		return (0);
}
