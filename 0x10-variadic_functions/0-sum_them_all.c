#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: how many numbers is there
 * @...: variables
 * Return: the sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, S = 0;

va_start(args, n);

for (i = 0; i < n; i++)
S += va_arg(args, int);

va_end(args);
return (S);
}
