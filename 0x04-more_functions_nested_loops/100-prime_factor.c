#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
long int n = 612852475143;
long int i = 2;

while (n > 1)
{
if (n % i == 0)
{
n = n / i;
}
else
{
i++;
}
}
printf("%ld\n", i);

return (0);
}
