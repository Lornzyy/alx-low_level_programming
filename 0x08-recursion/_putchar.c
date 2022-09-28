#include<unistd.h>
  


/**
* _putchar - function to enable writing into a file
* @c: the character
* Return: On success return 0
*         -1 On error and errno set
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
