#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - returns copy of the string given as a parameter
 * @str: string given
 * Return: the copy or null
 */

char *_strdup(char *str)
{
char *New;
int x;
int y;
if (str == NULL)
return (NULL);
x = 0;
while (str[x] != '\0')
x++;
New = malloc(sizeof(char) * (1 + x));
if (New == NULL)
return (NULL);
y = 0;
while (str[y])
{
New[y] = str[y];
y++;
}
return (New);
}
