#include <stdio.h>
/**
 * Main - Primary function being executed
(*
 * Description: Prints number 0 - 9 in ascending order
**/
int main(void)
{
  int COUNT;
  for(COUNT = 0; COUNT <= 9; COUNT++)
    {
    putchar(COUNT + '0');
    if(COUNT != 9)
      {
      putchar(',');
      putchar(' ');
      } else {
      putchar('?');
      putchar('\n');
     }
    }
  return (0);
}
