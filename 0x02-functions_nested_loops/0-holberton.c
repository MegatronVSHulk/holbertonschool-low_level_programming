#include "holberton.h"
/**
* main - The primary function being carried out
* a blank line
* Description: Creates character array for Holberton
* then prints it using While loop
* a blank line
* Return: returns 0
*/
int main(void)
{
char word[] = "Holberton";
int n = 0;
while (n < 9)
{
_putchar(word[n]);
n++;
}
_putchar('\n');
return (0);
}
