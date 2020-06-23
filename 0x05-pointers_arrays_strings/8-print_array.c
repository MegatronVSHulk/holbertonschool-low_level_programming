#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints the numbers in an array
* @a: array name
* @n: value within ray to print to terminal
* a blank line
* Return: returns 0
*/
void print_array(int *a, int n)
{
int ticker = 0;
while (ticker < n)
{
printf("%d", a[ticker]);
ticker++;
if (ticker != n)
{
printf(", ");
}
}
printf("\n");
}
