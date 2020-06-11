#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Main - Generates a random number
(* a blank line
 * Description: Integer generated that is sometimes
 * positive and sometimes negative. 
(* a blank line
 * Return: 0
**/
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n = 0)
  {
    printf("%d", n);
    printf(" is zero");
  }
  else
  {
    if (n < 0){
      printf("%d", n);
      printf(" is negative");
    }
    else
    {
      printf("%d", n);
      printf(" is positive\n");
    }
  }   
  return (0);
}
