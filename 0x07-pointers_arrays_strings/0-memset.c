#include "main.h"
/**
 * _memset - fill memory with constant byte
 * @s: memory address
 * @b: value of the char
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
memset(s, b, (sizeof(char) * n));

for (i = 0; i < n; i++)
{
printf("%c", s[i]);

}
return (s);
}
