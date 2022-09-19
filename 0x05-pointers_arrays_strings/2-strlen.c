#include "main.h"

/**
* _strlen - function to calculate length of string
* @s: the string to return lenth of
* Return: the length of char s
*/

int _strlen(char *s)
{
int length = 0;
while (*(s + length) != '\0')
{
length++;
}
return (length);
}
