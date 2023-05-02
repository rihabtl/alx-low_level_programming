#include "main.h"

/*
 * swap_int - swaps the values of two integer
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
