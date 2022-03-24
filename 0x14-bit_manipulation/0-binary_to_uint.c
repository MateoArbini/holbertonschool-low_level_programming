#include "main.h"
/**
 *binary_to_uint - function that converts binary number to unsigned int
 *The process, it starts in the last char of the string, and the it will go
 *through the numbers, and taking in consideration the conditions, which are
 *3, one if the string is NULL(b), which will return 0, the second condition
 *is when b[c] is different than 0, so in that case the condition will
 *return (0), and the last condition, when b[c] is 1, then we have to follow
 *the condition in order to return i, which is the binary number converted
 *to an unsigned int.
 *@b: string given
 *Return: i, which is the binary number converted to unsigned int
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 1;
	unsigned int converted = 0;
	int c;
	unsigned int length;

	if (b == NULL)
	{
		return (0);
	}

	length = strlen(b);
	for (c = (length - 1); c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
		if (b[c] == '1')
		{
			converted += x;
		}
		x *= 2;
	}

	return (converted);
}
