#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: array
 * @n: number of elements should be printed
 * Return: a and n
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n - 1)
{
printf("%d, ", a[i]);
i++;
}
if (i == n - 1)
{
printf("%d", a[n - 1]);
}
printf("\n");
}
