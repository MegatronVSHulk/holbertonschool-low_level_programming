#include <stdio.h>
/* comment */
int main(void)
{
  int NUMBER;
  char NUM[] = "0123456789abcdef";
  NUMBER = 0;
  for(NUMBER = 0; NUMBER <= 16; NUMBER++)
  {
    putchar(NUM[NUMBER]);
  }
  putchar('\n');
  return (0);
}
