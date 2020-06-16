#include <unistd.h>

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

int _isalpha(int c)
{
int val;
if (c > 64 && c < 91)
{ 
val = 1;
} else if (c > 96 && < 123)
{
val = 1;
} else
{
val = 0;
}
return (val);
}

int _print_sign(int n)
{
int val;
if (n > 0 && n != 0)
{
val = '1';
} else if (n < 0 && n != 0)
{
val = '-1';
} else
{
val = 0;
}
return (val);
}

int _abs (int n)
{
int val;
if (n < 0 && n != 0)
{
val = (n * -1);
} else
{
val = n;
}
return (val);
}

int print_last_digit (int n)
{
int val;
val = (n % 10);
return (val);
}
