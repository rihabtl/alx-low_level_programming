#include"main.h"

int my_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - eturns the natural square root of a number
 * @n: number
 * Return: result
 */

int _sqrt_recursion(int n)
{
int i;

i = 0;

if (n < 0)
return (-1);
if (n == 1)
return (1);
return (my_sqrt_recursion(n, i));
}

/**
 * my_sqrt_recursion - finds the natural square root of n
 * @n: number
 * @i: root
 * Return: square root
 */

int my_sqrt_recursion(int n, int i)
{
if (i *i == n)
return (i);
if (i == n / 2)
return (-1);
return (my_sqrt_recursion(n, i + 1));
}
