
#include "main.h"

/**
 * _strdup - to print duplicate string
 * @str - pointer
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	/* check for size in bytes using malloc */
	duplicate = malloc(length * sizeof(char) + 1);

	/* avoid duplicating a '\0' */
	if (duplicate  == NULL)
	{
		return (NULL);
	}

	/* duplicate the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate = '\0';

	return (duplicate);
	free(duplicate);
}
