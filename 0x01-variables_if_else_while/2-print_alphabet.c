#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
  char letter;
  for (letter = 'a'; letter <= 'z'; letter++){
    putchar(letter);
  }
  putchar('\n');
  return (0);
}
