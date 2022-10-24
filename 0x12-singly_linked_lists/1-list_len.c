#include "lists.h"

/**
 * list_len - return number of elmenets in the list
 *
 * @h: pointer to the list_t structure
 * Return: size of the lements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	i++;
	printf("-> %lu elements\n", i);

	return (i);
}

