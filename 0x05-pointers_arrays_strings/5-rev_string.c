#include "holberton.h"
/**
* rev_string - prints string, then prints in reverse
* @s: string being printed in reverse
* a blank line
* Return: returns 0
*/
void rev_string(char *s)
{
int length;
char *end, *begin, temp;
length = _strlen(s);
for (c = 0; c < length/2; c++)
{     
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
}

int _strlen(char *s)
{
int ticker = 0;
while (s[ticker] != '\0')
{
ticker++;
}
return (ticker);
}
