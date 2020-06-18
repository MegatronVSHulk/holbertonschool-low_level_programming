#include "holberton.h"
/**
* _isdigit - The primary function being carried out
* @c: The letter being parsed
* a blank line
* Return: returns @val
*/
int _isdigit(int c)
{
int val;
val = c;
if (val <= 57 && val >= 48)
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
