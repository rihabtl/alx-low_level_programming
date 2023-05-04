#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @p: string
 * Return: the new string
 */

char *cap_string(char *p)
{
int i = 0;

while (p[i])
{
while (!(p[i] >= 'a' && p[i] <= 'z'))
i++;
if (p[i - 1] == ' ' ||
p[i - 1] == '\t' ||
p[i - 1] == '\n' ||
p[i - 1] == ',' ||
p[i - 1] == ';' ||
p[i - 1] == '.' ||
p[i - 1] == '!' ||
p[i - 1] == '?' ||
p[i - 1] == '"' ||
p[i - 1] == '(' ||
p[i - 1] == ')' ||
p[i - 1] == '{' ||
p[i - 1] == '}' ||
i == 0)
p[i] -= 32;
i++;
}
return (p);
}
