#include "main.h"
/**
 *times_table - tablas del 0 al 9
 *
 *
 **/
void times_table(void);
{
	int a;
	int mult = 1, res = 0;
	int b;
for (a = 48; a <= 57; a++)
{
for (b = 48, b <= 57; b++)
{
res = (a - 48) * (b - 48);
sig = (a - 48) * ((b + 1) - 48);
if (res > 9)
{
_putchar((res / 10) + 48);
_putchar((res % 10) + 48);
}
else
_putchar(res + 48);
if (b != 57)
{
_putchar(',');
if (res <= 9 && sig <= 9 && b <= 57)
_putchar(' ');
_putchar(' ');
}
}
_putchar(10);
}
}


