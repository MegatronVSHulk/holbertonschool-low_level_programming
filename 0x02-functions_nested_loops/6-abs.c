#include "holberton.h"
/**
* _abs - The primary function being carried out
* @n: returns parsed integer
* Description: Parses 'n' returns 'val'
* a blank line
* Return: returns 0
*/
int _abs (int n)
{
int val;
if (n < 0 && n != 0)
{
val = (n * -1);
}
else
{
val = n;
}
return (val);
}
