#include"function_pointers.h"
#include<stdio.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @action: poinetr to pointer
 * @size: size
 * @array: array
 * Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a = 0;
if (!array || !action)
return;
while (a < size)
{
action(array[a]);
a++;
}
}
