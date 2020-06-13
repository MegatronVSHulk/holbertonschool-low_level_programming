#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* Main - Generates a random number
* a blank line
* Description: Integer generated that is sometimes
* positive and sometimes negative.
* a blank line
* Return: returns 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
return (0);
}
