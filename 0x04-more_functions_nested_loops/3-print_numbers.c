#include "main.h"
/**
* print_numbers - function to print line 0 to 9 with a new line
*/
void print_numbers(void)
{
char c = '0';
while (c <= '9')
{
_putchar(c);
c++;
}
_putchar('\n');
}
