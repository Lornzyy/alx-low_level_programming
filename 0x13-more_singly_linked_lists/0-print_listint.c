#include "lists.h"

/**
 * print_listint -print the list and the number of elements
 * @h: pointer to the struct list_t
 * Return: list of elements and the number of elements
 */

size_t print_listint(const listint_t *h);
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);

}

