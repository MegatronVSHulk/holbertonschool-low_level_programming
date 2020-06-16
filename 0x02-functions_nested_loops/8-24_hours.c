#include <stdio.h>
/**
* jack_bauer - The primary function being carried out
* a blank line
* _putchar - Function for printing characters
* a blank line
* Description: The integer variable 'n' which is
* stapled to integer variable RESULT. RESULT is printed.
* a blank line
* Return: returns 0
*/ 
int _putchar(char c)
{
  return (write(1, &c, 1));
}
void jack_bauer(void)
{
  int hr;
  int hr2;
  int min;
  int min2;
  int bool;
  char COLON;
  
  bool = 48;
  hr = 48;
  hr2 = 48;
  min = 48;
  min2 = 48;
  COLON = 58;
  

  for (hr = 48; bool = 1; min2++)
    {
      if (min2 == 57 && min != 53)
	{
	  min++;
	  min2 = 48; 
	}
      if (min == 53 && min2 == 57)
	{
	  if (hr2 == 57 && hr != 48)
	  {
	  hr++;
	  hr2 = 48;
	  } else if (hr2 == 51 && hr == 32)
	    {
	      bool = 1;
	    }
	  
	  min = 48;
	  min2 = 48;
	}
      _putchar(hr2);
      _putchar(hr);
      _putchar(':');
      _putchar(min2);
      _putchar(min);
    }
  
 }
int main(void){
  _putchar('g');
  jack_bauer();
  return (0);
}
