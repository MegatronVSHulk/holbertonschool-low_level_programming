#include "holberton.h"
/**
* jack_bauer - Primary function being executed
* a blank line
* Description: Prints military time up to 23:59 via putchar
* a blank line
* Return: returns 0
*/
void jack_bauer(void)
{
int h1, h2, m1, m2;
for (h1 = 0; h1 <= 2; h1++)
{
for (h2 = 0; h2 <= 9; h2++)
{
if (h1 == 2 && h2 == 4)
{
break;
}
else
{
for (m1 = 0; m1 < 6; m1++)
{
for (m2 = 0; m2 <= 9; m2++)
{
_putchar(h1 + '0');
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
}
}
}
}
}
}
