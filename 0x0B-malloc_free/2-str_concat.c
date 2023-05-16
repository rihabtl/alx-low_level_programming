#include"main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: contents of s1
 */

char *str_concat(char *s1, char *s2)
{

char *c;
int x, y;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = 0;
while (s1[x] != '\0')
x++;
y = 0;
while (s2[y] != '\0')
y++;
c = malloc(sizeof(char) * (x + y + 1));
if (c == NULL)
return (NULL);
for (x = 0; s1[x] != '\0'; x++)
c[x] = s1[x];
for (y = 0; s2[y] != '\0'; y++)
{
c[x] = s2[y];
x++;
}
c[x] = '\0';
return (c);
}
