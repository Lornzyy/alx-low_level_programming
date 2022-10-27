#include "lists.h"

/**
 * listint_len - return number of elmenets in the list
 *
 * @h: pointer to the list_t structure
 * Return: size of the lements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

