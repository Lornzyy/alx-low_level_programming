#include "main.h"

/**
 * print_number - function to print no using _putchar
 * @n: integer
 */

void print_number(int n)
{
unsigned int m;
if (n < 0)
{
_putchar('-');
n = -n;
}
else
m = n;
{
n = n;
}
if (n / 10)
print_number(n / 10);
_putchar(n % 10 + '0');
}
