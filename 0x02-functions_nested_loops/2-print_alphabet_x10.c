/**
* print_alphabet_x10 - The primary function being carried out
* a blank line
* _putchar - Function for printing characters
* a blank line
* Description: The integer variable 'n' which is
* stapled to integer variable RESULT. RESULT is printed.
* a blank line
* Return: returns 0
*/ 
void print_alphabet_x10(void);
{
  char letter;
  int count;
  letter = 'a';
  count = 0; 
  while (count < 10)
    {
      while (letter < 123)
	{
	  _putchar(letter);
	  letter++;
	}
      _putchar('\n');
      count++;
      letter = 'a';
    }
  return (0);
}
