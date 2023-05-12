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
int i;

for (i = 0; !(s[i] <= '9' && s[i] >= '0') && s[i] != '\0'; i++)
{
if (s[i] == '-')
sign = sign * -1;
}
for (i = 0; s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'); i++)
{
r = (r * 10) + (s[i] - '0');
}
r = r *sign;
return (r);
}
