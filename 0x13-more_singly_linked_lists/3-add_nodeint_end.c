#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->data = n;
		new_node->next = NULL;
		*head = new_node;

		return (new_node);
	}
	else
	{
		return (add_nodeint_end(&((*head)->next), n));
	}
}
