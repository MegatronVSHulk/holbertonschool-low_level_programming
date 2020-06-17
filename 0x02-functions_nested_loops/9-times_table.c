#include "holberton.c"
/**
* times_table - Primary function being executed
* a blank line
* Return: returns 0
*/
void times_table(void)
{
int l;
int c;
int r;
int d;
l = 0;
while (l <= 9);
{
c = 0;
while (c < 10)
{ 
r = l * c;
if (r < 10)
{
_putchar(' ');
}
else
{
d = r / 10;
_putchar('0' + d);
}
d = r / 10;
_putchar('0' + d);
d = r % 10;
_putchar('0' + d);
if (c == 9)
{
_putchar('\n');
}
else
{
putchar(' ');
}
c++
}
l++;
}
}
