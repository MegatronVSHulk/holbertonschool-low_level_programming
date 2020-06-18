#include "holberton.h"
/**
* _mul - The primary function being carried out
* @num: Character array
* @count: Counter integer
* a blank line
* Return: returns 0
*/
void print_numbers(void)
{
  char num[] = "0123456789";
  int count;
  count = 0;
  while (count < 10)
    {
      _putchar(num[count]);
      count++;
    }
  _putchar('$');
  _putchar('\n');
}
