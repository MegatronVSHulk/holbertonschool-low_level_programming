#include <stdio.h>
/* COMMENT */
int main(void)
{
  int COUNT;
  for(COUNT = 00; COUNT <= 99; COUNT++)
    {
      putchar((COUNT/10) + '0');
      putchar((COUNT%10) + '0');
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