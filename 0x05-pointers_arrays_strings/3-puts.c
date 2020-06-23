#include "holberton.h"
/**
* _puts - prints string to console, then new line
* @str: string being printed
* a blank line
* Return: returns 0
*/
void _puts(char *str)
{
int ticker = 0;
while (str[ticker] != '\0')
{
_putchar(str[ticker]);
ticker++;
}
_putchar('\n');
}
