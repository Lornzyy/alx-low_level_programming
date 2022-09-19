#include "main.h"
/**
* puts2 - function to print every character of a string
* @str: parameter to print individual character
* Return: void
*/
void puts2(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}
