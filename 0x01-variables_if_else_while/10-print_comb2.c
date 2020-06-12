#include <stdio.h>

/**
 *Main - Primary function being executed
 * Description: Integer variable COUNT is declared. COUNT is
 * given initial value of 00. We then start with a For Loop that 
 * continues as long as COUNT is less than or equal to 99. There
 * is an IF/ELSE statement that helps determine if another comma 
 * and space are needed, or if the program is complete and ready
 * to create a new line upon ending
*/

int main(void)
{
  int COUNT;
  for(COUNT = 00; COUNT <= 99; COUNT++)
    {
      putchar('0' + (COUNT/10));
      putchar('0' + (COUNT%10));
    if(COUNT != 99)
      {
      putchar(',');
      putchar(' ');
      } else {
      putchar('\n');
     }
    }
  return (0);
}
