#include "main.h"

int is_prime(int n, int i);
/**
 * is_prime_number - checks if n is prime
 * @n: the number
 * Return: 1 or 0 depending n
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime(n, n - 1));
}
/**
 * is_prime - defines if the number is prime
 * @n: the number
 * @k: other numbers
 * Return: 1 or 0
 */
int is_prime(int n, int k)
{
if (k == 1)
return (1);
if (n % k == 0 && k > 0)
return (0);
return (is_prime(n, k - 1));
}
