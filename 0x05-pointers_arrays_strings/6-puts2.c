#include "main.h"

/**
 * puts2 - prints only one character out of two
 * starting with the first one
 * @str: string
 * Return: prints string
 */

void puts2(char *s)
{
int L = 0;
int a = 0;
char *b = s;
int i;
    
while (*b != '\0')
{
b++;
L++;
}
a = L - 1;
for (i = 0; i <= a; i++)
{
if (i % 2 == 0)
{
_putchar(s[i]);
}
}
_putchar('\n');
}
