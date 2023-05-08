#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - rints the sum of the two diagonals
 * of a square matrix of integer
 * @a: array
 * @size: size
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
int x, y, z;

x = 0;
y = 0;
z = 0;
while (z < size)
{
x = x + a[z *size + z];
z++;
}
z = size - 1;
while (z >= 0)
{
y = y + a[z *size + (size - z - 1)];
z--;
}
printf("%d, %d\n", x, y);
}
