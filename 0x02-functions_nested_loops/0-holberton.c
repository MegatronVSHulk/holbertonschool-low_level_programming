/**
* main - The primary function being carried out
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
int main(void)
{
char word[] = "Holberton";
int n = 0;
while (n < 9)
{
_putchar(word[n]);
n++;
}
_putchar('\n');
return (0);
}
