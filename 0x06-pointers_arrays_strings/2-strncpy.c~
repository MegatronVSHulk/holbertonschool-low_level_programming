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
  int i = 0;
  int o = 0;
  int r = 0;
  while (dest[i] != '\0')
    {
      i++; // gets the length of dest array
    }
  while (o < n) // while o, which equals zero, is under n, our byte limit
    {
      src[o] = dest[r]; // makes src array = dest array value, both start from 0
      r++; // r and o increment by 1
      o++; // increments by 1
    }
  return (src); // returns the src array as the result
}
