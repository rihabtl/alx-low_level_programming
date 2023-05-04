#include "main.h"

/**
 * leet - encodes a string into 1337
 * @p: string
 * Return: p
 */

char *leet(char *p)
{
int a, b;

char str[11] = "aAeEoOtTlL";
char str1[11] = "4433007711";

for (a = 0; p[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (p[a] == str[b])
{
p[a] = str1[b];
}
}
}
return (p);
}
