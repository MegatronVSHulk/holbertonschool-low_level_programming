#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
  char CASEBIG;
  char CASESMALL;
  for(CASESMALL = 'a'; CASESMALL <= 'z'; CASESMALL++){
    putchar(CASESMALL);
  }
  for(CASEBIG = 'A'; CASEBIG <= 'Z'; CASEBIG++){
    putchar(CASEBIG);
  }
  putchar('\n');
  return (0);
}