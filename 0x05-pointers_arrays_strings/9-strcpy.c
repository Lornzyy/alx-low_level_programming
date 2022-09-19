#include "main.h"
/**
* _strcpy - function to copy an array
* @dest: the end point
* @src: the starting point
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';

return (dest);
}
