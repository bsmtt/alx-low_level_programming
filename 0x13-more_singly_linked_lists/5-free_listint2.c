#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
