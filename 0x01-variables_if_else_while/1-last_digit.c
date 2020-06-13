#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
* main - The primary function being carried out
* a blank line
* Description: The integer variable 'n' which is
* stapled to integer variable RESULT. RESULT is printed.
* a blank line
* Return: returns 0
*/
int main(void)
{
int n;
int RESULT;
srand(time(0));
n = (rand() - RAND_MAX / 2);
RESULT = (n % 10);
if (RESULT > 5)
{
printf("The last digit of %d is %d and is greater than 5\n", n, RESULT);
}
else if (RESULT == 0)
{
printf("The last digit of %d is %d and is 0\n", n, RESULT);
}
else
{
printf("The last digit of %d is %d and is less than 6 and not 0\n", n, RESULT);
}
return (0);
}
