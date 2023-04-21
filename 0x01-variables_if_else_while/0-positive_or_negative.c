#include <stdlib.h>
#include <time.h>
/* main entry point
 *the output should display
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * return 0
 * */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n",n);
else if (n == 0)
printf("%i is zero\n",n);
else
printf("%i is negative\n",n)
return (0);
}
