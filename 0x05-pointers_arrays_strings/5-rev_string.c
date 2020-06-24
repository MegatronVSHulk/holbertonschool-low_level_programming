#include "holberton.h"
/**
* rev_string - prints string, then prints in reverse
* @s: string being printed in reverse
* a blank line
* Return: returns 0
*/
void rev_string(char *s)
{
char *s2 = s;
char c;
int l;
while (*s2)
{
s2++;
l++;
}
l = l / 2;
s2--;
for (; l >= 0; l--)
{
c = *s;
*s = *s2;
*s2 = c;
s++;
s2--;
}
}
