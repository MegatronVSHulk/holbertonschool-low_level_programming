#include <stdio.h>
/**
*Main - Primary function being executed
*
*Return: 0
**/
int main(void)
{
int COUNT;
for(COUNT = 0; COUNT <= 9; COUNT++)
{
putchar(COUNT + '0');
if(COUNT != 9)
{
putchar(',');
putchar(' ');
} else
{
putchar('\n');
}
}
return (0);
}
