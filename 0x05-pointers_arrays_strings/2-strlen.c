#include "main.h"
/**
 *_strlen - largo del string a contar
 *@s: string
 *Return: numero del largo del string
 **/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
