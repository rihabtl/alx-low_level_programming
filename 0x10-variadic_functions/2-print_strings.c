#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: The string to be printed between numbers
 * @n: how many integers
 * @...: numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int d = 0;
va_start(strings, n);
while (d < n)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (d != (n - 1) && separator != NULL)
printf("%s", separator);
d++;
}
printf("\n");
va_end(strings);
}
