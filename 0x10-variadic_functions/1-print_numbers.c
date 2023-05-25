#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers
* @separator: The string to be printed between numbers
* @n: The number of integers
* @...: numbers to be printed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list num;
unsigned int a = 0;

va_start(num, n);
while (a < n)
{
printf("%d", va_arg(num, int));
if (a != (n - 1) && separator != NULL)
printf("%s", separator);
a++;
}
printf("\n");
va_end(num);
}
