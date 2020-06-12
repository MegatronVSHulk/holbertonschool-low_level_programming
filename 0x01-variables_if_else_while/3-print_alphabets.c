#include <stdio.h>
/* Main - Primary function being executed
*
* Description: Prints entire alphabet twice, lowercase then uppercase
**/
int main(void)
{
char CASEBIG;
char CASESMALL;
for(CASESMALL = 'a'; CASESMALL <= 'z'; CASESMALL++)
{
putchar(CASESMALL);
}
for(CASEBIG = 'A'; CASEBIG <= 'Z'; CASEBIG++)
{
putchar(CASEBIG);
}
putchar('\n');
return (0);
}
