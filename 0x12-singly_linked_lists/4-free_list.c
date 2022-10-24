#include "lists.h"

/**
 * free_list - free the list
 * @head: the pointer to the list_t
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);

		head = temp;
	}
}

