#include "main.h"
/**
* print_sign - function to print a sign associated to n
* @n: The character used in the functions' argument
* Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return(0);
}
else
 _putchar('-');
return (-1);
}
