#include "holberton.c"
/**
* times_table - Primary function being executed
* a blank line
* Return: returns 0
*/
void times_table(void)
{
int val, cnt, mult, ten, one;
for (mult = 0; mult <= 9; mult++)
{
val = 0;
for (cnt = 0; cnt <= 9; cnt++)
{
ten = val / 10;
one = val % 10;
if (cnt < 9 && val <= 9)
{
_putchar(one + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
val = val + mult;
} else if (cnt < 9 && val > 9)
{
_putchar(ten + '0');
_putchar(one + '0');
_putchar('$');
_putchar('\n');
}
}
}
}
