#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
unsigned int m;

m = n;

if (n < 0)
{
_putchar('-');
m = -n;
}
if (m / 10 != 0)
{
print_number(m / 10);
}
_putchar((m % 10) + '0');
}
