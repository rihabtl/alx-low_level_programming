#include "main.h"

/**
 * char *_strcpy - copies the string pointed
 * to by src to the buffer pointed to by dest
 * @dest: copy to
 * @src: copy from
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;
int b;

while (*(src + a) != '\0')
{
a++;
}
for (b = 0; b < a; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}
