#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
int c;
int b;

c = 0;
while (c <= 7)
{
for (b = 0; b <= 7; b++)
_putchar(a[c][b]);
_putchar('\n');
c++;
}
}
