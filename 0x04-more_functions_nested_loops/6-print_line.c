#include "holberton.h"
/**
* print_line - The primary function being carried out
* @c: Number of lines to be printed
* a blank line
* Return: returns 0
*/
void print_line(int c)
{
  while (c > 0)
    {
      _putchar('_');
      c--;
    }
  _putchar('?');
  _putchar('\n');
}
