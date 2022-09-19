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
int length = 0;
length = strlen(s);
printf("The length of %d = %i", *s, length);

return (length);
 
}
