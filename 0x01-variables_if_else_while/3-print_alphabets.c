#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * a program that prints the alphabet in lowercase and uppercase
 * Return: 0
 **/
int main(void)
{
char n, x;
n = 'a';
x = 'A';
while (n <= 'z')
{
putchar(n);
n++;
}
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar ('\n');
return (0);
}
