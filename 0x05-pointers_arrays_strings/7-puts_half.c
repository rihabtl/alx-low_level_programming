#include "main.h"

/**
 * puts_half - prints half of a string
 * n = (length_of_the_string - 1) / 2 only if odd
 * @str: string
 * Return: half of str
 */

void puts_half(char *str)
{
int i = 0;
int L = 0;
int n;

while (str[i] != '\0')
{
L++;
i++;
}
n = L / 2;
if (L % 2 != 0)
n = ((L + 1) / 2);
for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
