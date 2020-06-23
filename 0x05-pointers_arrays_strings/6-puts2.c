#include "holberton.h"
/**
* puts2 - prints string to console, then new line
* @str: string being printed
* a blank line
* Return: returns 0
*/
void puts2(char *str)
{
int ticker = 0;
int ticker1 = 0;
while (str[ticker] != '\0')
{
if (ticker1 == 0)
{
_putchar(str[ticker]);
ticker++;
ticker1++;
}
else if (ticker1 == 1)
{
ticker++;
ticker1 = 0;
}
}
_putchar('\n');
}
