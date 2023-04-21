#include <stdlib.h>
#include <time.h>
/* main - entry
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 * return 0 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit n == 0)
printf("Last digit of %i is %i and is 0\n",n,digit);
else if (digit < 6 && digit != 0)
printf("Last digit of %i is %i and is less than 6 and not 0\n",n,digit);
else if (digit > 5)
printf("Last digit of %i is %i and is greater than 5\n",n,digit);
return (0);
}
