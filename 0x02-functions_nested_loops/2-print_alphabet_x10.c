#include "stdio.h"
#include "stdlib.h"
/**
 *main - prints the alphabet x10 lowercase
 *
 *Return: Always 0
 **/

void print_alphabet_x10(void);

int main(void)
{
print_alphabet_x10();
return (0);
}
/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 **/
void print_alphabet_x10(void)
{
int i;
char ch;
for (i = 0; i <= 9; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
}
