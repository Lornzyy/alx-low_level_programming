#include "main.h"

/**
 * reverse_array - function to reverse elements of the array
 * @a: pointer of the array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
int i, temp;


for (i = n - 1; 1 >= 0; i--)
{
  temp = a[n - 1 - i];
  temp = a[i];
  a[i] = temp;
}
