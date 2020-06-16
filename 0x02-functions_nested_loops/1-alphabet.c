#include "holberton.h"
/**
* print_alphabet - The primary function being carried out
* a blank line
* Description: The integer variable 'n' which is
* stapled to integer variable RESULT. RESULT is printed.
* a blank line
* Return: returns 0
*/
void print_alphabet(void);
{
char letter;
letter = 'a';
while (letter < 123)
{
_putchar(letter);
letter++;
}
_putchar('\n');
return (0);
}
