#include "main.h"
/**
* print_number - function to print an integer
* @n: parameter
* Return: 0
*/
void print_number(int n)
{
unsigned int m, d, count;
if (n < 0)
{
_putchar('-');
m = n * -1;
}
else
{
m = n;
}
d = m;
count = 1;
while (d > 9)
{
d /= 10;
count *= 10;
}
for (; count >= 1; count /= 10)
{
_putchar(((m / count) % 10) + '0');
}
}
