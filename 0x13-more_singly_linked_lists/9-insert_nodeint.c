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
	if (newnode == NULL || head == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	while (temp)
	{
		if (i == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		i++;
		temp = temp->next;
	}
	free(newnode);
	return (NULL);
}

