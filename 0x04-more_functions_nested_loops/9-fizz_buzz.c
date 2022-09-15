#include <stdio.h>
#include "main.h"
/**
* main - print the numbers from 1 to 100
* Return: numbers from 1 to 100, fizz, Buzz, FizzBuzz
*/
int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i / 3)
{
putchar('Fizz');
putchar(' ');
}
else if (i / 5)
{
putchar('Buzz');
putchar(' ');
}
else if (i / 3 && i / 5)
{
putchar('FizzBuzz');
}
else
{
putchar(i);
putchar(' ');
}
}
