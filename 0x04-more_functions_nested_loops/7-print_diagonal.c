#include "holberton.h"
/**
* print_most_numbers - The primary function being carried out
* @num: Character array
* @count: Counter integer
* a blank line
* Return: returns 0
*/
void print_diagonal(int n)
{
  int lineCount;
  int space;
  space = 0;
  lineCount = 0;
  if (n > 0)
    {
  while (lineCount < n)
    {
      while (space <= lineCount)
	{
	  _putchar(' ');
	 space++;
	 }
      space = 0;
      _putchar('\\');
      _putchar('$');
      _putchar('\n');
      lineCount++;
    }
    }
  else
    {
      _putchar('$');
      _putchar('\n');
    }
}
