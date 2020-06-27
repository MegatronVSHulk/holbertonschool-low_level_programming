 #include "holberton.h"
/**
* _strncpy - combines two strings with pointers
* @dest: the destination of combined string
* @src: the source of data for string
* @n: number used at limiter
* a blank line
* Return: returns @src
*/
char *_strncpy(char *dest, char *src, int n)
{
int o = 0;
while ((o < n) && (o != '\0'))
{
dest[o] = src[o];
o++;
}
while (o < n)
{
dest[o] = '\0';
o++;
}
return (dest);
}
