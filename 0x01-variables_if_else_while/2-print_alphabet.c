#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * a program that prints the alphabet in lowercase
 * Return: 0
 **/
int main(void)
{
char n;
n = 'a';
srand(time(0));
n = rand() - RAND_MAX / 2;
do {
putchar(n);
n++;
} while (n <= 'z');
putchar ("\n");
return (0);
}
