#include"main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of the string given
 */

int _strlen_recursion(char *s)
{
int L;

L = 0;

if (*s)
{
L++;
L = L + _strlen_recursion(s + 1);
}
return (L);
}
