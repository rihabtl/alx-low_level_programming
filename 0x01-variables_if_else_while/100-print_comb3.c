#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * program that prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
int i;
int j;

i = '0';
while (i <= '9')
{
j = i + 1;
while (j <= '9')
{
putchar(i);
putchar(j);
if (i != '8')
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
