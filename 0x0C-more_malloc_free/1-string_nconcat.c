#include"main.h"
#include<stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: pointer of new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *New;
unsigned int i, len1, len2;
unsigned j = 0;
len1 = 0;
while (s1 && s1[len1])
len1++;
len2 = 0;
while (s2 && s2[len2])
len2++;

if (n < len2)
New = malloc(sizeof(char) * (len1 + n + 1));
else
New = malloc(sizeof(char) * (len1 + len2 + 1));

if (!New)
return (NULL);
i = 0;
while (i < len1)
{
New[i] = s1[i];
i++;
}

while (n < len2 && i < (len1 + n))
New[i++] = s2[j++];
while (n >= len2 && i < (len1 + len2))
New[i++] = s2[j++];

New[i] = '\0';
return (New);
}
