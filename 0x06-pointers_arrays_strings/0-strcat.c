#include "holberton.h"
/**
* _strcat - combines two strings with pointers
* @dest: the destination of combined string
* @src: the source of data for string
* a blank line
* Return: returns @dest
*/
char *_strcat(char *dest, char *src)
{
  int i = 0;
  int n = 0;
  while (dest[i] != '\0')
    {
      i++;
    }
  for (n = 0; src[n] != '\0'; n++, i++)
    {
      dest[i] = src[n];
    }
  dest[i] = '\0';
  
  return (dest);
}
