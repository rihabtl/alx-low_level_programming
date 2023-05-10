#include"main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: the number
 * Return: n! or 1 if n<0
 */

int factorial(int n)
{
int r;

r = n;

if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);
r = r *factorial(n - 1);
return (r);
}
