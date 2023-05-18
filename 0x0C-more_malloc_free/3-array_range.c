#include"main.h"
#include<stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer of new array
 */

int *array_range(int min, int max)
{
int i;
int *ptr;

if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
return (NULL);
i = 0;
while (min <= max)
{
ptr[i] = min++;
i++;
}
return (ptr);
}
