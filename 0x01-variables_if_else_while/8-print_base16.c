#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * write a program that prints reverse alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char n;
int x;
x = '0';
n = 'a';

while (x <= '9')
{
putchar(x);
x++;
}
while (n <= 'f')
{
putchar(n);
n++;
}
putchar ('\n');
return (0);
}
