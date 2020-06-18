#include "holberton.h"
/**
* more_numbers - The primary function being carried out
* a blank line
* Return: returns 0
*/
void more_numbers(void)
{
int num;
int num1;
int num2;
int mainCount;
mainCount = 0;
num = 0;
while (mainCount < 10)
{
while (num < 15)
{
num1 = ((num % 10) + '0');
num2 = ((num / 10) + '0');
if (num >= 9)
{
_putchar(num2);
}  
_putchar(num1);
num++;  
}
if (num >= 14)
{
_putchar('\n');
mainCount++;
num = 0;
}
}
}
