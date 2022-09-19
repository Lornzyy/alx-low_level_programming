#include "main.h"

/**
* print_rev - function to print string
* @s: the string to be printed
*/

void print_rev(char *s)
{
int length;

while (*(s + length) != '\0')
{
length++;
}
while (length--)
{
_putchar(*(s + (length)));
}
_putchar('\n');
}
