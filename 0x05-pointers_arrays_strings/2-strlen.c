#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strlen - function to calculate length of string
* @s: the string to return lenth of
* Return: the length of char s
*/

int _strlen(char *s)
{
int length;
length = strlen(*s);
printf("The length of %s = %d", s, length);

return (0);
}
