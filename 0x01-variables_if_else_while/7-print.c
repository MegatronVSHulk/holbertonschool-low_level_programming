#include <stdio.h>
/* comments */
int main(void)
{
  char LETTER;
  for(LETTER = 'z'; LETTER >= 'a'; LETTER--){
    putchar(LETTER);
  }
  putchar('\n');
  return (0);
}
