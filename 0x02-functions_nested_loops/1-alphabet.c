#include "holberton.h"
/**
* print_alphabet - The primary function being carried out
* a blank line
* Description: The letter variable is incremented until z
* a blank line
* Return: returns 0
*/
void print_alphabet(void)
{
char letter;
letter = 'a';
while (letter < 123)
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
