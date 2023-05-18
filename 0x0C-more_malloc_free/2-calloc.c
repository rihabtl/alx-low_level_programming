#include"main.h"
#include<stdlib.h>

/**
 * _calloc -allocates memory for an array, using mallo
 * @nmemb: how many element
 * @size: the size
 * Return: pointer of allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;
if (size == 0 || nmemb == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
i = 0;
while (i < (nmemb * size))
{
ptr[i] = 0;
i++;
}
return (ptr);
}
