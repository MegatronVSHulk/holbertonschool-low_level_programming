#include <stdio.h>
/* COMMENT */
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