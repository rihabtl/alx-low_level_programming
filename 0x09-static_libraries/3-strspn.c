#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
int a;
unsigned int n;
n = 0;
while (*s)
{
a = 0;
while (accept[a])
{
if (*s == accept[a])
{
n++;
break;
}
else if (accept[a + 1] == '\0')
return (n);
a++;
}
s++;
}
return (n);
}
