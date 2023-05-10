#include"main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: the number
 * @y: the power
 * Return: the new number ,-1 if y<0
 */

int _pow_recursion(int x, int y)
{
int r;

r = x;

if (y == 0)
return (1);
else if (y < 0)
return (-1);
r = r *_pow_recursion(x, y - 1);
return (r);
}
