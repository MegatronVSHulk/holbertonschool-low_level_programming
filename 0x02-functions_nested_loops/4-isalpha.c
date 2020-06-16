#include "holberton.h"
/**
* _isalpha - The primary function being carried out
* @c: integer or char value
* a blank line
* Description: The integer variable 'n' which is
* stapled to integer variable RESULT. RESULT is printed.
* a blank line
* Return: returns @val
*/
int _isalpha(int c)
{
int val;
if (c > 64 && c < 91)
{ 
val = 1;
}
else if (c > 96 && c < 123)
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
