#include "main.h"

/**
 * _strdup - function to copy string
 * @str: string to be copied
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	/* find the length of the string to be copied */

	while (str[length] != '\0')
	{
		length++;
	}

	/* find the size to be allocated using malloc */
	duplicate = malloc(length * sizeof(char) + 1);

	/* avoid duplicating '\0' */
	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* DUPLICATE STRING TO LOCATION ASSIGNED */

	for (i = 0; str[i] != '\0'; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[i] = '\0';

	return (duplicate);
	free(duplicate);

}

