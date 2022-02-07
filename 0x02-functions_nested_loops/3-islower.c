#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

/**
 * main - function that checks character
 * Return: 1 if c is lowercase and 0 otherwise
 **/

void int _islower(int c);

int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
/**
 * _islower - function that checks character
 **/
void int _islower(int c);
{
int x

