#include "main.h"

/**
 * string_nconcat - concat two strings
 * @s1: first string
 * @s2: second string
 * @n: number of the first bytes of s2
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatstr;
	unsigned int lengths1 = 0, lengths2 = 0, i;

	/* check ifthe strings are null and then find the length using loops */
	if (s1 == NULL)
		lengths1 = 0;
	else
	{
		while (s1[lengths1] != '\0')
		{
			lengths1++;
		}
	}
	if (s2 == NULL)
		lengths2 = 0;
	else
	{
		while (s2[lengths2] != '\0')
		{
			lengths2++;
		}
	}
	/* check if the length of s2 is > than the first n bytes of s2 */
	if (lengths2 > n)
		lengths2 = n;
	concatstr = (char *)malloc(sizeof(char) * (lengths1 + lengths2 + 1));
	if (concatstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lengths1; i++)
	{
		concatstr[i] = s1[i];
	}
	for (i = 0; i < lengths2; i++)
	{
		concatstr[i + lengths1] = s2[i];
	}
	concatstr[lengths1 + lengths2] = '\0';
	return (concatstr);
}

