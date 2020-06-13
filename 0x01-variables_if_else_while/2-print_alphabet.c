#include <stdio.h>
/**
* main - Primary function being executed
* a blank line
* Description: Prints entire alphabet, lowercase
* a blank line
* Return: returns 0
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
