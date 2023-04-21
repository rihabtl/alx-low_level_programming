#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * the program prints from 0 to 9
 * Return: 0
 */
int main(void)
{
int n;
n = '0';

while (n <= '9')
{
putchar(n);
if (n == '9')
break;
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
