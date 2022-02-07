#include "main.h"
/**
 *print_last_digit - print last number
 *@n: number
 *Return: last digit of a number
 **/

int print_last_digit(int n)
{
int l = n % 10;

if (l < 0)
l = l * -1;
_putchar('0' + l);
return (l);
}
