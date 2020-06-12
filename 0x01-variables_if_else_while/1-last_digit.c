#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Main - The primary function being carried out
(*
 * Description: The integer variable 'n' which is
 * stapled to integer variable RESULT. RESULT is used
 * in coordination with the 3 IF/THEN statements that 
 * weight its value against 0, 5, and 6.
**/
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  int RESULT;
  RESULT = n % 10;
  printf("The last digit of %d is %d ", n, RESULT);
  if (RESULT > 5)
  {
    printf("and is greater than 5\n");
  }
  if (RESULT = 0)
  {
    printf("and is 0\n");
  }
  if (RESULT < 6 && RESULT != 0)
  {
    printf("and is less than 6 and not 0\n");
  }
  return (0);
}
