#include <stdio.h>
#include "holberton.h"
/**
* print_to_98 - The primary function being carried out
* @n: is parsed and prints difference from 'n' to 98
* a blank line
* Description: Function takes input, print input - 98
* a blank line
* Return: returns 0
*/
void print_to_98(int n)
{
int isPositive;
int difference;
int actual;
printf("%d, ", n);
if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
if (n > 0 && n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
if (n < 0)
{
isPositive = n * -1;
difference = isPositive + 98;
actual = difference * -1;
while (actual < 99)
{
printf("%d, ", actual);
actual++;
}
}
printf("98\n");
}
