#include "main.h"

/**
* print_rev - function to print string
* @s: the string to be printed
* Return: string
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
putchar(*(s + (length)));
}
putchar('\n');
}
