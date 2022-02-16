#include "main.h"
/**
 *rot13 - traduce letras a rot13
 *@c: string
 *Return: c
 **/
char *rot13(char *c)
{
	int i = 0;
	int a = 0;
	char or[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; c[i]; i++)
	{
		for (a = 0; a < 52; a++)
		{
			if (c[i] == or[a])
			{
				c[i] = new[a];
				break;
			}
		}
	}
	return (c);
}
