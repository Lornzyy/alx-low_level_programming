#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print n elements of an array
 * @a: is the pointer to be used
 * @n: is the number of elements to be printed
 * Return: the elements
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}
printf("\n");
}
