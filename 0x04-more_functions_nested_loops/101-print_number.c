#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
int i = 1;

while (n / i >= 10 || n / i <= -10)
{
i = i * 10;
}

if (n < 0)
{
_putchar('-');
n = -n;
}
while (i != 0)
{
_putchar((n / i) % 10 + '0');
i /= 10;
}
}
