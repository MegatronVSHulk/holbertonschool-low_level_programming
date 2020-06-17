#include "holberton.h"
/**
* jack_bauer - The primary function being carried out
* a blank line
* Description: The integer variable 'n' which is
* stapled to integer variable RESULT. RESULT is printed.
* a blank line
* Return: returns 0
*/ 
void jack_bauer(void)
{
int m, h, d;
h = 0;
while (h < 24)
{
m = 0;
while (m < 60)
{
d = h / 10;
_putchar('0' + d);
d = h % 10;
_putchar('0' + d);
_putchar(':');
d = m / 10;
_putchar('0' + d);
d = m % 10;
m++;
}
h++
}
}
