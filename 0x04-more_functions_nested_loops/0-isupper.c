#include "holberton.h"
/**
* _isupper - The primary function being carried out
* @c: The letter being parsed
* a blank line
* Return: returns @val
*/
int _isupper(int c)
{
int val;
val = c;
if (val <= 90 && val >= 60)
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
