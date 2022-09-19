#include "main.h"
/**
* swap_int - function to reverse integers
* @a: parameter to act as first integer
* @b: parameter to act as second integer
*/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;

}
