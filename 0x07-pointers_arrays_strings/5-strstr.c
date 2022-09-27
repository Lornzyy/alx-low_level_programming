#include "main.h"

/**
 * _strstr - find the first occurence of string
 * @haystack: the original string
 * @needle: the string searched
 * Return: pointer to the match
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
int len = strlen(haystack) - strlen(needle);
for (i = 0; i < len; i++)
{
for (j = 0; j < len; j++)
if (haystack[i + j] != needle[j])
break;
if j == strlen(needle)
needle[j] = haystack[i];
}
return (0);
}
