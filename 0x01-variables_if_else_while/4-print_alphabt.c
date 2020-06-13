#include <stdio.h>
/**
* main - Primary function being executed
* a blank line
* Description: Prints entire alphabet, lowercase, excludes
* the letter 'e' and 'q' with an IF statement existing within
* a blank line
* Return: returns 0
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' || letter != 'q')
{
putchar(letter);
}
}
return (0);
}
