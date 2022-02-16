#include "main.h"
/**
 *leet - cambia algunas letras por numeros
 *@c: string
 *Return: string c
 **/
char *leet(char *c)
{
	int i = 0;
	int a = 0;
	char or[] = "aAeEoOtTlL";
	char new[] = "4433007711";

	for (; c[i]; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (c[i] == or[a])
			{
				c[i] = new[a];
			}
		}
	}
	return (c);
}

