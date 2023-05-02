#include "main.h"

/**
 * puts2 - prints only one character out of two
 * starting with the first one
 * @str: string
 * Return: prints string
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
