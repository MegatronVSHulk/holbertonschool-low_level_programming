#include <stdio.h>
/* Main - Primary function being executed
*
* Description: Prints entire alphabet twice, lowercase then uppercase
**/
int main(void)
{
char CASEBIG;
for(CASESMALL = 'a'; CASESMALL <= 'z'; CASESMALL++)
{
putchar(CASESMALL);
}
for(CASESMALL = 'A'; CASESMALL <= 'Z'; CASESMALL++)
{
putchar(CASESMALL);
}
putchar('\n');
return (0);
}
