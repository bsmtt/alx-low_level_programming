#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The data value for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;

		return (new_node);
	}
	else
	{
		return (add_nodeint_end(&((*head)->next), n));
	}
}
