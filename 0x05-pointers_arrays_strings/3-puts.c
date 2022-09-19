#include "main.h"
/**
 * _puts - function to print string
 * @str: the string to be printed
 * Return: string
 */
void _puts(char *str)
{
while (*str > 0)
{
_putchar(*str);
*str++;
}
_putchar('\n');
return (0);
}
