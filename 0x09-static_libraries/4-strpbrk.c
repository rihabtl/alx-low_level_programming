#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
int a;

while (*s)
{
a = 0;
while (accept[a])
{
if (*s == accept[a])
return (s);
a++;
}
s++;
}
return ('\0');
}
