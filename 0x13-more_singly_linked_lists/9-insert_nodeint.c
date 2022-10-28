#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at an indes
 * @head: head pointer to the first node
 * @idx: the index at posiiton
 * @n: n part of the struct
 * Return: the pointer to the node at the specified index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *temp;

	temp = *head;
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return NULL;
	}

	for (i = 1; i < idx; i++)
	{
		if (temp->next == NULL)
		{
			return NULL;
		}
		else
		{
			temp = temp->next;
		}
	}

	temp->next = newnode;

	return (*head);
}

