#include "main.h"
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
_putchar(ch);
}
_putchar('\n');
}
}
