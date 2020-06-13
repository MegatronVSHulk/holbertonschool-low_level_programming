#include <stdio.h>
/**
* main - Primary function being executed
* a blank line
* integer variable number is declared
* Description: counts 0 to 9
* a blank line
* Return: returns 0
*/
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
putchar('0' + number);
}
return (0);
}
