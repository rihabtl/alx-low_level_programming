#include <stdio.h>

/**
 * main - Lists the  numbers below 1024
 * that are multiples of 3 or 5
 * Return: Always 0.
 */
int main(void)
{
int S = 0;
int x = 0;

while (x < 1024)
{
if ((x % 3) == 0 || (x % 5) == 0)
S += x;
x = 0;
}

printf("%d\n", S);

return (0);
}
