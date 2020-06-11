#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* Print first string to terminal */
  printf("Last digit of ");
  /* We create new variable RESULT that
   * grabs last digit of integer. We then
   * print the result to terminal, followed
   * by the string " is " and the RESULT.
   */
  int RESULT;
  RESULT = (n % 10);
  printf("%d", n);
  printf(" is ");
  printf("%d", RESULT);
  /* Now we introduce IF/THEN/ELSE statements
   * into the code that compare the value of
   * RESULT weighed against 0, 5, and 6. True
   * statements will print the cooresponding 
   * string.
   */
  if (RESULT > 5){
    /* If last digit, RESULT, is greater than 5 */
    printf(" and is greater than 5\n");
  }
  if (RESULT = 0){
    /* If last digit, RESULT, is zero */
    printf(" and is 0\n");
  }
  if (RESULT < 6 && RESULT != 0){
    /* If last digit, RESULT, is less than 6 and not 0 */
    printf(" and is less than 6 and not 0\n");
  } 
  return (0);
}
