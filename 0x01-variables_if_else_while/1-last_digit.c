#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/* Main - The primary function being carried out
(* a blank line
 * Description: The integer variable 'n' which is
 * stapled to integer variable RESULT. RESULT is used
 * in coordination with the 3 IF/THEN statements that 
 * weight its value against 0, 5, and 6.
**/
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
  if (RESULT == 0)
  {
    printf("The last digit of %d is %d and is 0\n", n, RESULT);
  }
  if (RESULT < 6 && RESULT != 0)
  {
    printf("The last digit of %d is %d and is less than 6 and not 0\n", n, RESULT);
  }
  return (0);
}
