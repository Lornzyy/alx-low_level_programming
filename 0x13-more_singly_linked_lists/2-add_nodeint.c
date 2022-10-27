#include "lists.h"

/**
 * add_nodeint - add nodes to the linked list
 * @head: double pointer to the address of the first node
 * @n: a constant integer
 * Return: list_t elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}

