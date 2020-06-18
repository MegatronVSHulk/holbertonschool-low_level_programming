#include <stdio.h>
/**
* main - Primary function being executed
* a blank line
* Return: returns 0
*/
int main(void)
{
int ticker_five;
int ticker_three;
int should_print;
int current_number;
should_print = 0;
ticker_three = 0;
ticker_five = 0;
current_number = 1;
while (current_number < 101)
{
should_print = 0;
ticker_three++;
ticker_five++;
if (ticker_three == 3)
{
printf("Fizz ");
should_print++;
ticker_three = 0;
}
if (ticker_five == 5)
{
printf("Buzz ");
should_print++;
ticker_five = 0;
}
if (should_print == 0)
{
printf("%d ", current_number);
} 
current_number++;
}
printf("\n");
}
