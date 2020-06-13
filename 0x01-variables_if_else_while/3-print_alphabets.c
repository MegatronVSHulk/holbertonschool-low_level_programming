#include <stdio.h>
/**
* main - Primary function being executed
* a blank line
* Description: Prints entire alphabet twice, lowercase then uppercase
* a blank line
* Return: returns 0
*/
int main(void)
{
char CASESMALL;
for (CASESMALL = 'a'; CASESMALL <= 'z'; CASESMALL++)
{
putchar(CASESMALL);
}
for (CASESMALL = 'A'; CASESMALL <= 'Z'; CASESMALL++)
{
putchar(CASESMALL);
}
putchar('\n');
return (0);
}
