#include "holberton.h"
/**
* puts_half - measures the length of string in characters, returns count
* @s: string being measured
* a blank line
* Return: returns 0
*/
void puts_half(char *s)
{
int ticker = 0;
int half = 0;
while (s[ticker] != '\0')
{
ticker++;
}
half = (ticker / 2);
while (s[half] != '\0')
{
_putchar(s[half]);
half++;
}
}
