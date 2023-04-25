#include "main.h"

/**
* jack_bauer - prints all  minutes of Jack Bauer
* the code starts from 00:00 to 23:59
*/

void jack_bauer(void)
{
int h, m;

for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
putchar((h / 10) + '0');
putchar((h % 10) + '0');
putchar(':');
putchar((m / 10) + '0');
putchar((m % 10) + '0');
putchar('\n');
}
}
}
