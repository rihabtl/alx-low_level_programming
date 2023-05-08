#include "main.h"

/**
 * _strstr -  locates a substring
 * @haystack: string
 * @needle: substring
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{

while (*haystack != '\0')
{
char *p1 = haystack;
char *p2 = needle;
while (*p1 == *p2 && *p2 != '\0')
{
p1++;
p2++;
}
if (*p2 == '\0')
return (haystack);
haystack++;
}
return (0);
}
