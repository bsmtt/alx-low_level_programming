#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_head;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	new_head = reverse_listint_helper(*head, (*head)->next);
	(*head)->next = NULL;
	return (new_head);
}

/**
 * reverse_listint_helper - Recursive helper.
 * @prev: Pointer to the previous node.
 * @current: Pointer to the current node.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint_helper(listint_t *prev, listint_t *current)
{
	listint_t *next;

	if (current->next == NULL)
	{
		current->next = prev;
		return (current);
	}

	next = current->next;

	current->next = prev;

	return (reverse_listint_helper(current, next));
}
