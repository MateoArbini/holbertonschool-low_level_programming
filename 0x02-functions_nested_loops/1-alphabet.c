#include "stdio.h"

/**
 * main - print aalphabet in lowercase followed by new line
 * Return: Always 0
 **/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void);
/**
 * print_alphabet - prints alphabet lowercase
 **/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
