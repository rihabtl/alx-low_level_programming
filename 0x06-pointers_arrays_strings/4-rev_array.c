#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
int x, y;

x = 0;
while (x < n--)
{
y = a[x];
a[x] = a[n];
a[n] = y;
x++;
}
}
