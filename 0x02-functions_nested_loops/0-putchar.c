#include "main.h"
/**
 * main - prints _putchar
 * Return: 0 always
 **/
int main(void)
{
char x[8] = "_putchar";
int a;

for (a = 0; a < 9; a++)
{
_putchar(x[a]);
}
_putchar('\n');
return (0);
}
