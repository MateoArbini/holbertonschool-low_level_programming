#include "stdio.h"
#include "time.h"
#include "stdlib.h"

/**
 *	*main - impirme el alfabeto en miniscula
 *	*Return: always
 *
 *	**/
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++); 
	{
		putchar(ch);
	}
		putchar('\n');
		return (0);
}
