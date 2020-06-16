#include "holberton.h"
/**
* _print_sign - The primary function being carried out
* a blank line
* _putchar - Function for printing characters
* a blank line
* Description: The integer variable 'n' which is
* stapled to integer variable RESULT. RESULT is printed.
* a blank line
* Return: returns 0
*/ 
int _print_sign(int n)
{
int val;
if (n > 0 && n != 0)
{
val = '1';
} else if (n < 0 && n != 0)
{
val = '-1';
} else
{
val = 0;
}
return (val);
}
