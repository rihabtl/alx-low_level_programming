#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character
 * @s: string
 * Return:  pointer to the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
int x = 0;

while (s[x] >= '\0')
{
if (s[x] == c)
return (&s[x]);
x++;
}
return (0);
}
