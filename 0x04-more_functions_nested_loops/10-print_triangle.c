#include "holberton.h"
/**
* print_most_numbers - The primary function being carried out
* @size: Integer being passed on
* a blank line
* Return: returns 0
*/
void print_triangle(int size)
{
  int height;
  int length;  
  int noSpaces;
  int noBlocks;
  length = 1;
  noSpaces = (size - length);
  height = size;
  if (size > 0)
    {
      while (height > 0)
	{
	  while (noSpaces > 0)
	    {
	      _putchar(' ');
	      noSpaces--;
	    }
	  while (noBlocks > 0)
	    {
	      _putchar('#');
	      noBlocks--;
	    }
	  noSpaces = (size - length);
	  noBlocks = length;
	  length++;
	  height--;
	  _putchar('\n');
	}
      _putchar('\n');
    }
  else
    {
      _putchar('\n');
    }
}
