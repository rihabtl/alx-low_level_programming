#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name with pointer
 * @f: pointer to function
 * @name: the string
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
if (!f || !name)
return;
f(name);
}
