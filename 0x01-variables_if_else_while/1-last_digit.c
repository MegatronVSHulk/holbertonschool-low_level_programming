#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
* main - The primary function being carried out
* a blank line
* Description: The integer variable 'n' which is
* stapled to integer variable RESULT. RESULT is used
* in coordination with the 3 IF/THEN statements that
* weight its value against 0, 5, and 6.
* a blank line
* Return: 0
*/
int main(void)
{
int n;
int RESULT;
srand(time(0));
n = rand() - RAND_MAX / 2;
RESULT = n % 10;
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
