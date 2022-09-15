#include <stdio.h>
#include "main.h"
/**
* print_square - function to print square
* @size: the int to calculate the size
* Return: 0
*/
void print_square(int size)
{
int length1, length2;
if (size > 0)
{
for (length1 = 0; length1 < size; length1++)
{
for (length2 - 0; length2 < (size - length1); length2++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
