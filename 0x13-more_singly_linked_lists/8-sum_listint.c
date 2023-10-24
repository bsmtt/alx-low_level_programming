#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}
