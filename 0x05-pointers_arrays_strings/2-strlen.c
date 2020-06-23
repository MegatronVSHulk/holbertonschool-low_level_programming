#include "holberton.h"
/**
* _strlen - measures the length of string in characters, returns count
* @s: string being measured
* a blank line
* Return: returns @ticker
*/
int _strlen(char *s)
{
int ticker = 0;
while (s[ticker] != '\0')
{
ticker++;
}
return (ticker);
}
