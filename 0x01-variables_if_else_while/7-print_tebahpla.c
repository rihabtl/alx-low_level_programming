#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  * main - Entry point
 *   * a program that prints reverse alphabet in lowercase
 *    * Return: 0
 *     **/
int main(void)
{
char n;
n = 'z';

while (n >= 'a')
{
putchar(n);
n--;
}
putchar ('\n');
return (0);
}
