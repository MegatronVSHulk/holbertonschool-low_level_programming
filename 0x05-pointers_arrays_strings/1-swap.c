#include "holberton.h"
/**
* swap_int - the function swaps two pointer values
* @a: first pointer
* @b: second pointer
* Return: returns 0
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
