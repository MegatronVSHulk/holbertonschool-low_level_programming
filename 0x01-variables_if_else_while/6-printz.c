#include <stdio.h>
/* main */
int main(void)
{
  /* integer variable number is declared then put
   * through the For loop with an ++ increment.
   * We then use putchar (VAR + '0') which shifts 
   * from the ASCII output to the literal output 
   * of the integer. It is then printed on console
   */
  int number;
  for(number = 0; number < 10; number++){
    putchar(number + '0');
  }
  return (0);
}

