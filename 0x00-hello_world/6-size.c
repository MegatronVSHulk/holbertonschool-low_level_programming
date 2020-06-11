#include<stdio.h>
int main() {
  int intSize;
  char charSize;
  long int LongIntSize;
  long long int LLIS;
  float floatSize;
  printf("Size of char: %ld byte(s)\n", sizeof(charSize));
  printf("Size of an int: %ld byte(s)\n", sizeof(intSize));
  printf("Size of a long int: %ld byte(s)\n", sizeof(LongIntSize));
  printf("Size of a long long int: %ld byte(s)\n", sizeof(LLIS));
  printf("Size of a float: %ld byte(s)\n", sizeof(floatSize));
  return (0);
}
