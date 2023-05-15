#include"main.h"
#include<stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @c: the character
 * @size: the size of the array
 * Return: Null if it fails or pointer of arr
 */

char *create_array(unsigned int size, char c)
{
unsigned int x;
char *st;

st = malloc(sizeof(char) * size);
if (size == 0 || st == NULL)
return (NULL);
x = 0;
while (x < size)
{
st[x] = c;
x++;
}
return (st);
}
