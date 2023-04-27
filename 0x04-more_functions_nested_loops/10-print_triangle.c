#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;

i = 1;

while (i <= size)
{
j = 1;

while(j < size)
{
_putchar(' ');
j++;
}
j = 1;

while (j <= i)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
}
