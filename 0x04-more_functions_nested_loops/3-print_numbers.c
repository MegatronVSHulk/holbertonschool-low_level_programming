#include "holberton.h"
/**
* print_numbers - The primary function being carried out
* a blank line
* Return: returns 0
*/
void print_numbers(void)
{
char num[] = "0123456789?";
int count;
count = 0;
while (count < 11)
{
_putchar(num[count]);
count++;
}
_putchar('\n');
}
