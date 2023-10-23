#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Prints all the elements of a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	return (1 + print_listint(h->next));
}
