#include<stdio.h>
/**
 * main - function puts the string to the console
 * @intSize: First operand
 * @charSize: Second operand
 * @LongIntSize: Third operand
 * @LLIS: Forth final operand
(* a blank line
 * Description: the function main writes the string into the terminal
(* a blank line
 * Return: returns 0
 *
 */
int main(void)
{
  int intSize;
  char charSize;
  long int LongIntSize;
  long long int LLIS;
  float floatSize;
  printf("Size of char: %lx byte(s)\n", sizeof(charSize));
  printf("Size of an int: %lx byte(s)\n", sizeof(intSize));
  printf("Size of a long int: %lx byte(s)\n", sizeof(LongIntSize));
  printf("Size of a long long int: %lx byte(s)\n", sizeof(LLIS));
  printf("Size of a float: %lx byte(s)\n", sizeof(floatSize));
  return (0);
}
