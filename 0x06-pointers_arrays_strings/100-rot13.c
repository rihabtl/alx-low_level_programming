#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string
 * Return: the new string
 */

char *rot13(char *s)
{
char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char str1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int a;
int b;

a = 0;
while (s[a] != '\0')
{
for (b = 0; b <= 51; b++)
{
if (s[a] == str[b])
{
s[a] = str1[b];
break;
}
}
a++;
}
return (s);
}
