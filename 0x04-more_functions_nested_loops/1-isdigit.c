#include "main.h"
/**
* _isdigit - function to check digit 0 through 9
* @c: The int used to print 0 through 9
* Return: 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
