/**
* print_alphabet - The primary function being carried out
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
void print_alphabet(void);
{
  char letter;
  letter = 'a';
  while (letter < 123)
    {
      _putchar(letter);
      letter++;
    }
  _putchar('\n');
  return (0);
}
int main(void);
{
  print_alphabet();
}
