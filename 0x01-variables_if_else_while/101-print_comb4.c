#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Write a program that prints all possible
 * different combinations of three digits
 * Return: 0
 */
int main(void)
{
int i;
int j;
int k;
i = '0';

while (i <= '9')
{
j = i + 1;
while (j <= '9')
{
k = j +	1;
while (k <= '9')
{
putchar(i);
putchar(j);
putchar(k);
if (i != '7' || j != '8')
{
putchar(',');
putchar(' ');
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
