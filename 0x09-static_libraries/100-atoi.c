#include "main.h"

/**
 * _atoi - convert string to integer.
 * @s:string
 * Return: integer.
 */

int _atoi(char *s)
{
unsigned int r = 0;
int sign = 1;
int i = 0;

while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign = sign * -1;
i++;
}

while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
{
r = (r * 10) + (s[i] - '0');
i++;
}
r = r *sign;
return (r);
}
