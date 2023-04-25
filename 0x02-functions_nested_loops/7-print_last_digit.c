#include "main.h"

/**
 * print_last_digit - prints the last digit of n
 * @n: the int to print the last digit from
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int x;

if (n < 0)
n = -n;
x = n % 10;
if (x < 0)
x = -x;
_putchar(x + '0');

return (x);
}
