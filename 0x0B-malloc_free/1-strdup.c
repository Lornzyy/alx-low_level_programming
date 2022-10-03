#include "main.h"
#include <stdlib.h>

/**
 * _strdup - to print duplicate string
 * @str: - pointer
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *dup;
	int i;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	/* check to see for thelength */
	while (str[length] != '\0')
	{
		length++;
	}
	/* check for size in bytes using malloc */
	dup = malloc((length * sizeof(char)) + 1);

	/* avoid duplicating a '\0' */
	if (dup == NULL)
	{
		return (NULL);
	}

	/* duplicate the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';

	return (dup);
	free(dup);
}
