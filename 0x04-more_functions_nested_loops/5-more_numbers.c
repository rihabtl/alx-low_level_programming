#include "main.h"

/**
 * more_numbers - print numbers in lines
 */

void more_numbers(void)
{
int i = 1;
int j;

while (i <= 10)
{
j = 0;
while (j <= 14)
{
if (j >= 10)
_putchar('1');
_putchar (j % 10 + '0');
j++;
}
_putchar('\n');
i++;
}
}
