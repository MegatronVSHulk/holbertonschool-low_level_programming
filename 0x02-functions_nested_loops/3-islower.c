/**
* print_alphabet - The primary function being carried out
* a blank line
* Description: The integer variable 'n' which is
* stapled to integer variable RESULT. RESULT is printed.
* a blank line
* Return: returns 0
*/
int _islower(int c)
{
int val;
if (c > 96 && c < 123)
{ 
val = 1;
} else if (c < 96 || c > 123)
{
val = 0;
}
return (val);
}
