#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
* main - the primary function being ecexuted
* divide3 - returns Y if divisible by 3, returns N if not
* divide5 - returns Y if divisible by 5, returns N if not
* a blank line 
* @current_number: the current number being counted, examined, and printed
* @current_number_converted: current number as a double
* @ticks: used to count qualifying factors of current number to/to not print
* @function_result: placeholder to recieve Y or N in main 
*
*/
int divide3(double n)
{
  int asInt;
  float placeholder;
  float placeholder_end;
  int yes_no;
  yes_no = 0;
  placeholder = (n / 3);  
  asInt = (int)placeholder;                                                                                          
  placeholder_end = placeholder - asInt;
  printf("Result is %f\n", placeholder_end);                                                   
  if (placeholder_end == 0.0f)                                                                                           {
    printf("Buzz");                                                                                          
    yes_no = 1;
  }
  else 
    {
      yes_no = 0;
    }
 return (yes_no); 
}
int divide5(double n)
{
  int asInt;
  float placeholder;
  float placeholder_end;
  int yes_no;
  yes_no = 0;

  placeholder = (n / 3);
  asInt = (int)placeholder;
  placeholder_end = placeholder - asInt;
  printf("Result is %f\n", placeholder_end);
  if (placeholder_end == 0.0f)
    {
      printf("Fizz");
      yes_no = 1; /** IS NOT DIVISIBLE */
    } else
    {
      yes_no = 0;
    }
  return (yes_no);
}

int main(void)
{
  int current_number;
  float current_number_converted;
  int ticks;
  int function_result;

  function_result = 0;
  current_number = 453;
 
  current_number_converted = current_number;
 
  function_result = divide5(current_number_converted);
  if (function_result = 0)
    {
      printf("It is divisible %d\n", function_result);
    }
  else if (function_result = 1)
    {
      printf("It is not! %d\n", function_result);
    }
} 
