#include "holberton.h"
/**
* print_squares - The primary function being carried out
* a blank line
* Return: returns 0
*/
void print_square(int size)
{
int lineCount;
int space;
space = size;
lineCount = 0;
if (size > 0)
{
while (lineCount < size)
{
while (space > 0)
{
_putchar('#');
space--;
}
space = size;
_putchar('\n');
lineCount++;
}
}
else
{
_putchar('\n');
}
}
