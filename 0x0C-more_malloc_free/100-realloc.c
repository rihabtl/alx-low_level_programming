#include"main.h"
#include<stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (ptr == NULL)
ptr = malloc(new_size);
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
