#include "main.h"
/**
* print_to_98 - function to print numbers from 0 to 98
* @n: the int to be used as an argument in the function
* Return: 0
*/
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
