#include "holberton.h"
/**
* print_rev - prints string in reverse
* @s: string being printed in reverse
* a blank line
* Return: returns 0
*/
void print_rev(char *s)
{
int ticker = 0;
while (s[ticker] != '\0')
{
ticker++;
}
while (ticker => 0)
{
_putchar(s[ticker]);
ticker--;
}
_putchar('\n');
}
