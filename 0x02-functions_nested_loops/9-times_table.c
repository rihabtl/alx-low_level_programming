#include "main.h"
/**
 * times_table - prints the time table
 */

void times_table(void)
{
int x = 0, y, z;

while (x < 10)
{
for (y = 0; y < 10; y++)
{
z = x * y;
if (y == 0)
{
_putchar(z + '0');
}

if (z < 10 && y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else if (z >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
}
_putchar('\n');
x++;
}
}
