#include "main.h"

/**
 * str_concat - concatenate stringss
 * @s1: first string
 * @s2: second string
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, lengths1 = 0, lengths2 = 0;
	char *concat;


	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (s1[lengths1] != '\0')
	{
		lengths1++;
	}
	while (s2[lengths2] != '\0')
	{
		lengths2++;
	}

	concat = malloc((lengths1 * sizeof(char)) + (lengths2 * sizeof(char)) + 1);

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (i = 0;  i < lengths1; i++)
		concat[i] = s1[i];

	for (j = 0; j <= lengths2; i++, j++)
	{
		concat[i] = s2[j];
	}
	return (concat);

}

