/**
* _print_sign - The primary function being carried out
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
int _abs (int n)
{
  int val;
  if (n < 0 && n != 0)
    {
      val = (n * -1);
    }  else {
      val = n;
    }
  return (val);
}
