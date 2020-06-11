#include<stdio.h>
int main() {
  int intSize;
  char charSize;
  long int LongIntSize;
  long long int LLIS;
  float floatSize;
  printf("Size of char: %ld bytes\n", sizeof(charSize));
  printf("Size of an int: %ld bytes\n", sizeof(intSize));
  printf("Size of a long int: %ld bytes\n", sizeof(LongIntSize));
  printf("Size of a long long int: %ld bytes\n", sizeof(LLIS));
  printf("Size of a float: %ld bytes\n", sizeof(floatSize));
  return (0);
}
