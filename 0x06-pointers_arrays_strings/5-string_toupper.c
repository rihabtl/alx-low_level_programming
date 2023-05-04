#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @p: pointer
* Return: p
*/

char *string_toupper(char *p)
{
int a;

for (a = 0; p[a] != '\0'; a++)
{
if (p[a] >= 'a' && p[a] <= 'z')
p[a] = p[a] - 32;
}
return (p);
}
