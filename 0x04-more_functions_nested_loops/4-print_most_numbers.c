#include "holberton.h"
/**
* print_most_numbers - The primary function being carried out
* @num: Character array
* @count: Counter integer
* a blank line
* Return: returns 0
*/
void print_most_numbers(void)
{
  char num[] = "0123456789";
  int count;
  count = 0;
  while (count < 10)
    {
      if (num[count] != '2' && num[count] != '4')
	{
	  _putchar(num[count]);
	}
      count++;
    }
  _putchar('\n');
}
