#include "main.h"

/**
 * reverse_array - function to reverse arrays
 * @a: the arrays 
 * @n: the number of elements
 */

void reverse_array(int *a, int n)
{
int  i;

for (i = n - 1; i >= 0; i--)
{
a[n - 1 - i] = a[i];
}
}
