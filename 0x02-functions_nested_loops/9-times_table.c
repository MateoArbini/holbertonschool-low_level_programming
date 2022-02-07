#include "main.h"
/**
 *times_table - tablas del 0 al 9
 *
 *
 **/
void times_table(void);
{
	int i;
	int mult = 1, res = 0;
	int j;
for (i = 0; i <= 9; i++)
{
for (j = 0, j <= 9; j++)
{
res = j * mult;
if (res > 9)
{
if (j != 0)
_putchar(' ');
_putchar((res / 10) + 48);
_putchar((res % 10) + 48);
if (j != 9)
_putchar(',');
}
else
{
if(j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(res + 48);
if (j != 9)
_putchar(',');
}
}
_putchar('n\');
}

