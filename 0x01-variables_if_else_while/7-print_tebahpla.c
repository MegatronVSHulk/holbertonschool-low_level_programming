#include <stdio.h>
/**
* main - Primary function being executed
* a blank line
* Description: Prints entire alphabet, lowercase, in reverse
* a blank line
* Return: returns 0
*/
int main(void)
{
char LETTER;
for (LETTER = 'z'; LETTER >= 'a'; LETTER--)
{
putchar(LETTER);
}
putchar('\n');
return (0);
}
