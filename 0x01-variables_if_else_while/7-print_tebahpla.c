#include <stdio.h>
/**
 * Main - Primary function being executed
(*
 * Description: Prints entire alphabet, lowercase, in reverse
**/
int main(void)
{
  char LETTER;
  for(LETTER = 'z'; LETTER >= 'a'; LETTER--){
    putchar(LETTER);
  }
  putchar('\n');
  return (0);
}
