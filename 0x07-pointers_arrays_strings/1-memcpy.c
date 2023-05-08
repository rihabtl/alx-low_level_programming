#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area destination
 * @src: memory area source
 * @n: bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int b = n;
int a = 0;

while (a < b)
{
dest[a] = src[a];
n--;
a++;
}
return (dest);
}
