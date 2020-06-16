#include "holberton.h"
/**
* print_sign - The primary function being carried out
* @n: integer that is parsed
* a blank line
* Description: The integer variable 'n' is parsed
* a blank line
* Return: returns @val
*/ 
int print_sign(int n)
{
int val;
if (n > 0 && n != 0)
{
val = 1;
_putchar('+');
}
else if (n < 0 && n != 0)
{
val = -1;
_putchar('-');
}
else
{
val = 0;
_putchar('0');
}
return (val);
}
