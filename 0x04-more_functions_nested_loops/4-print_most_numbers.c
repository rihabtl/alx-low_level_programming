#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return:
 */

void print_most_numbers(void)
{
int ch;

for (ch = 48; ch <= 57; ch++)
{
if (!(ch == 50 || ch == 52))

_putchar(ch);
}
_putchar('\n');
}
