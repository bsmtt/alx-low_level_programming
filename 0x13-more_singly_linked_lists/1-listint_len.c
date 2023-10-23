#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	return (1 + print_listint(h->next));
}
