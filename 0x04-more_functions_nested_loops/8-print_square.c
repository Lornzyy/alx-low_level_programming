#include <stdio.h>
#include "main.h"
/**
* print_square - function to print square
* @size: the int to calculate the size
* Return: returns nothing
*/
void print_square(int size)
{
int length1, length2;
if (size > 0)
{
for (length1 = 0; length1 < size; length1++)
{
for (length2 = 0; length2 < (size - length1); length2++)
{
putchar('#');
}
putchar('#');
putchar('\n');
}
}
else
{
putchar('\n');
}
}
