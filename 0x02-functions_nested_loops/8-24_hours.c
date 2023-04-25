#include "main.h"

/**
* jack_bauer - prints all  minutes of Jack Bauer
* the code starts from 00:00 to 23:59
*/

void jack_bauer(void)
{
int a, b;


for (a = 0; a < 24; a++)
{
b = 0;
while (b < 60)
{
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar(':');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
b++;
}
}
}
