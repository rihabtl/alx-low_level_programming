#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry ponit
 * program that prints all possible combinations of two
 * two-digit numbers
 * Return: 0
 */
int main(void)
{
int i, j;
i = 0;
while (i < 99)
{
j = i + 1;
while (j <= 99)
{
putchar('0' + i / 10);
putchar('0' + i % 10);

putchar(' ');
putchar('0' + j / 10);
putchar('0' + j % 10);

if (i == 98 && j == 99)
break;
putchar(',');
putchar(' ');
j++;
}
i++;
}
putchar('\n');
return (0);
}
