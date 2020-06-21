#include "holberton.h"
/**
* print_diagonal - The primary function being carried out
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
_putchar('\n');
lineCount++;
}
}
else
{
_putchar('\n');
}
}
