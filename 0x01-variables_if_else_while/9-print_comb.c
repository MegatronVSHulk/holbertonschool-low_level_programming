#include <stdio.h>
/*Main - Primary function being executed
*Description: @COUNT initiates at 0 and is used to count up to 9.
*Return: 0
**/
int main(void)
{
int COUNT;
for(COUNT = 0; COUNT <= 9; COUNT++)
{
putchar(''0' + COUNT);
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
