#include <stdio.h>
/*
* Main - Primary function being executed
*
* Description: Prints entire alphabet, lowercase, excludes
* the letter 'e' and 'q' with an IF statement existing within
* the FOR statement.
* Return: 0
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}
return (0);
}
