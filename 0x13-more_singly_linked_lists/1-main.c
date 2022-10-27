#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}

	new->n = 5;
	new->next = head;
	head = new;
	n = listint_len(head);
	printf("-> %lu elements\n", n);

	free(new);
	return (0);
}


