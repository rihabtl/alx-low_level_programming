#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size
 * @cmp: pointer to funtion
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a = 0;
if (!array || !cmp || size <= 0)
return (-1);
while (a < size)
{
if (cmp(array[a]))
return (a);
a++;
}
return (-1);
}
