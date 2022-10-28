#include "lists.h"


/**
 * delete_nodeint_at_index - delete node at index index
 * @head:pointer to head of the linked lists
 * @index: index of the node to be deleted
 * Return: the node to be deleted
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next;
	unsigned int i;

	if (!head || !(*head))
	{
		return (-1);
	}
	temp = (*head);
	if (!index)
	{
		(*head) = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (!temp || temp->next)
	{
		return (-1);
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}

